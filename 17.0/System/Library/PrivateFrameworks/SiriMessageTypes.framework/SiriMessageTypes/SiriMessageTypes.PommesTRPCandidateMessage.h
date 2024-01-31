@class NSString;

@interface SiriMessageTypes.PommesTRPCandidateMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ pegasusId;
    void /* unknown type, empty encoding */ tcuId;
    void /* unknown type, empty encoding */ pommesResult;
    void /* unknown type, empty encoding */ searchReason;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (void).cxx_destruct;

@end
