@class NSString;

@interface SKEUserSpecificInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ userIdentityClassification;
    void /* unknown type, empty encoding */ rawVoiceIDScore;
    void /* unknown type, empty encoding */ userAttribute;
    void /* unknown type, empty encoding */ isFirstInteractionForUser;
    void /* unknown type, empty encoding */ didSpeakerChange;
    void /* unknown type, empty encoding */ isOnlyUserInHome;
    void /* unknown type, empty encoding */ voiceProfilesInFlight;
    void /* unknown type, empty encoding */ twentyFourHourTimeDisplay;
    void /* unknown type, empty encoding */ explicitContentAllowed;
    void /* unknown type, empty encoding */ censorSpeech;
    void /* unknown type, empty encoding */ companionAssistantId;
    void /* unknown type, empty encoding */ meCard;
    void /* unknown type, empty encoding */ preferredLanguage;
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ temperatureUnit;
    void /* unknown type, empty encoding */ wasSpeechProfileUsedByASR;
    void /* unknown type, empty encoding */ lowScoreThreshold;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isGroundingConditionallyNeeded;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
