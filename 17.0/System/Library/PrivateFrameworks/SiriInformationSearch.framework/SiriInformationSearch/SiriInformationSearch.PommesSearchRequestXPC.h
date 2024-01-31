@interface SiriInformationSearch.PommesSearchRequestXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ listenAfterSpeaking;
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ isMultiUser;
    void /* unknown type, empty encoding */ parseState;
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ responseMode;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ deviceRestrictions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
