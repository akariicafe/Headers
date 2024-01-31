@class NSString;

@interface SiriMessageTypes.TTResponseMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void /* unknown type, empty encoding */ tcuMappedNLResponse;
    void /* unknown type, empty encoding */ tcuStateDict;
    void /* unknown type, empty encoding */ mitigationDecision;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;

@end
