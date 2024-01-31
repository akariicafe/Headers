@class NSString;

@interface SiriMessageTypes.ExecutionFinalizedMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ tcuId;
    void /* unknown type, empty encoding */ flowPluginId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
