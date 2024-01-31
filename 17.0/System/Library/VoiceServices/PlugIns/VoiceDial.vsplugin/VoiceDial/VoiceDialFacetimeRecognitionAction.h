@class NSString;

@interface VoiceDialFacetimeRecognitionAction : VSRecognitionURLAction {
    NSString *_contactInfo;
    int _abID;
}

- (id)perform;
- (void).cxx_destruct;
- (id)initWithContactInfo:(id)a0 uid:(int)a1;

@end
