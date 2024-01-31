@interface SpeakerRecognition.SSRVTUITrainingManagerHelper : NSObject {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ currentAsset;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)getCurrentAsset;
- (id)initWithProfile:(id)a0 withDelegate:(id)a1;
- (void)setLocaleIdentifierWithLocaleIdentifier:(id)a0;
- (void)setProfileAndDelegateWithProfile:(id)a0 withDelegate:(id)a1;
- (id)voiceProfile;

@end
