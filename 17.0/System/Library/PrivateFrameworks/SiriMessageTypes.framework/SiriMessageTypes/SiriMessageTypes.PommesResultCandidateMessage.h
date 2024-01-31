@class NSString;

@interface SiriMessageTypes.PommesResultCandidateMessage : SiriMessageTypes.ResultCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ pegasusId;
    void /* unknown type, empty encoding */ pommesResponse;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ searchReason;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;

@end
