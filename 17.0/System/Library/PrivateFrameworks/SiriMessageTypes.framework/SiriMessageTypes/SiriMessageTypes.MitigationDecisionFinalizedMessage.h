@class NSString;

@interface SiriMessageTypes.MitigationDecisionFinalizedMessage : SiriMessageTypes.RequestMessageBase {
    void /* unknown type, empty encoding */ isMitigated;
}

@property (nonatomic, readonly) NSString *description;

@end
