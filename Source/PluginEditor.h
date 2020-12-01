/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Audio_plugin_dspAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Audio_plugin_dspAudioProcessorEditor (Audio_plugin_dspAudioProcessor&);
    ~Audio_plugin_dspAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Audio_plugin_dspAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Audio_plugin_dspAudioProcessorEditor)
};
