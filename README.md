What It Is:
A JUCE-based delay audio plugin with parameter automation and state saving using APVTS.

What It Does:
If loaded into a DAW or using a JUCE AudioPluginHost, a user can input an audio signal and have the signal be
"delayed" which results in an echo effect. In my plugin, a user can effect the rate at which the delay effect occurs, the mix amount of the "dry" and "wet" signal,
and the gain amount.

Demo:
https://youtu.be/dABNGfXy4VQ

To Demo Yourself:
Download and setup JUCE to your desired specifications
Clone the repo
Open the project in Xcode or VSCode
Build the project
Run as a standalone or in a DAW of your choice.

Usage:
The effect features three adjustable parameters: Time, Mix, and Gain. Time adjusts the delay rate displayed in ms or s. Mix adjusts the mix of your dry and wet
signal. Gain adjusts the overall output of the delay. Use caution if using headphones or sensitive speakers, as adjusting the gain too high may result in distortion.

Technical Details:
Framework & Language: Built in C++ using the JUCE framework for cross-platform audio plugin development (VST3/Standalone).
Parameter Management: Implemented using juce::AudioProcessorValueTreeState (APVTS) to define, store, and manage all plugin parameters in a centralized and thread-safe structure.
GUI–Parameter Binding: Utilizes SliderAttachment to bind UI controls directly to APVTS parameters, ensuring real-time synchronization between the interface and audio processing logic.
State Persistence: Plugin state is serialized and restored using JUCE’s ValueTree → XML conversion via getStateInformation and setStateInformation, enabling full parameter recall across sessions in a DAW.
Audio Processing Architecture: Follows JUCE’s AudioProcessor lifecycle, processing audio buffers in real time while maintaining low-latency performance suitable for live playback.
Plugin Formats & Hosting: Built and tested as both a standalone application and VST3 plugin, with validation performed using JUCE’s AudioPluginHost and external DAWs.
Code Organization: Modular design separating processor (DSP/audio logic), editor (GUI), and parameter layout definitions for maintainability and scalability.

Future Improvements:
Tap tempo function
Feedback rate control
Analog style high frequency roll-off
Improved UI
