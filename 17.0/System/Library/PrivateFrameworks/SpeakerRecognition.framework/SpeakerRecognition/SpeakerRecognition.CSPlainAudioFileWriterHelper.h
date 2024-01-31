@interface SpeakerRecognition.CSPlainAudioFileWriterHelper : NSObject <CSAudioFileWriter> {
    void /* unknown type, empty encoding */ isWriting;
    void /* unknown type, empty encoding */ fFile;
    void /* unknown type, empty encoding */ inASBD;
    void /* unknown type, empty encoding */ outASBD;
    void /* unknown type, empty encoding */ fileURL;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)endAudio;
- (BOOL)addSamples:(void *)a0 numSamples:(unsigned long long)a1;

@end
