@class NSString;

@interface SiriMessageTypes.TRPCandidateRequestMessageBase : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ trpCandidateId;
    void /* unknown type, empty encoding */ userId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
