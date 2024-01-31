@class NSString;

@interface SiriMessageTypes.TRPFinalizedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ lastTRPCandidateId;
    void /* unknown type, empty encoding */ finalTRPId;
    void /* unknown type, empty encoding */ finalTCUId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
