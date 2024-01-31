@class NSString;

@interface SiriMessageTypes.UserIdAwareResultCandidateMessageBase : SiriMessageTypes.ResultCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ userId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
