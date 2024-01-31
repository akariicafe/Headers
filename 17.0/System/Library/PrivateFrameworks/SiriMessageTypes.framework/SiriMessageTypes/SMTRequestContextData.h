@class NSString;

@interface SMTRequestContextData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ responseMode;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ bargeInModes;
    void /* unknown type, empty encoding */ approximatePreviousTTSInterval;
    void /* unknown type, empty encoding */ deviceRestrictions;
    void /* unknown type, empty encoding */ voiceTriggerEventInfo;
    void /* unknown type, empty encoding */ voiceAudioSessionId;
    void /* unknown type, empty encoding */ isSystemApertureEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
