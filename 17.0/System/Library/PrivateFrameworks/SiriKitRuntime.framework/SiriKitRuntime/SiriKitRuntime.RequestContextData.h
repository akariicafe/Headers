@class NSString;

@interface SiriKitRuntime.RequestContextData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inputOrigin;
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ responseMode;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isDirectAction;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ peerInfo;
    void /* unknown type, empty encoding */ endpointInfo;
    void /* unknown type, empty encoding */ instanceInfo;
    void /* unknown type, empty encoding */ bargeInModes;
    void /* unknown type, empty encoding */ approximatePreviousTTSInterval;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ originatingHome;
    void /* unknown type, empty encoding */ currentDeviceAssistantId;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ didPreviouslyFallbackToServer;
    void /* unknown type, empty encoding */ isSpeechRequest;
    void /* unknown type, empty encoding */ isUserOnActivePhoneCall;
    void /* unknown type, empty encoding */ voiceTriggerEventInfo;
    void /* unknown type, empty encoding */ isRecognizeMyVoiceEnabled;
    void /* unknown type, empty encoding */ voiceAudioSessionId;
    void /* unknown type, empty encoding */ isSystemApertureEnabled;
    void /* unknown type, empty encoding */ isInAmbient;
    void /* unknown type, empty encoding */ positionInSession;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
