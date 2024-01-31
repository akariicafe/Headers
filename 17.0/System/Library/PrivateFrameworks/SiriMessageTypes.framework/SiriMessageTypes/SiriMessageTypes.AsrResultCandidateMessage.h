@class NSString;

@interface SiriMessageTypes.AsrResultCandidateMessage : SiriMessageTypes.UserIdAwareResultCandidateMessageBase {
    void /* unknown type, empty encoding */ speechPackage;
    void /* unknown type, empty encoding */ voiceIdScore;
    void /* unknown type, empty encoding */ voiceIdClassification;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;

@end
