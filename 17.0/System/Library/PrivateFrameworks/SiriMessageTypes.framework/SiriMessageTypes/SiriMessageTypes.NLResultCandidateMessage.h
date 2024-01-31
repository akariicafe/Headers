@class NSString;

@interface SiriMessageTypes.NLResultCandidateMessage : SiriMessageTypes.NLResultCandidateMessageBase {
    void /* unknown type, empty encoding */ voiceIdScore;
    void /* unknown type, empty encoding */ voiceIdClassification;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

@end
