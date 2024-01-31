@interface G2PObjc : NSObject {
    void /* unknown type, empty encoding */ MAX_INPUT_LEN;
    void /* unknown type, empty encoding */ MAX_OUTPUT_LEN;
    void /* unknown type, empty encoding */ DECODE_SYM_SIZE;
    void /* unknown type, empty encoding */ CODEC_OFFSET;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)getPhrasePronounciationWithPhrase:(id)a0 wordSep:(id)a1 prefixWithPhrase:(BOOL)a2;
- (id)getPronounciationWithWord:(id)a0;

@end
