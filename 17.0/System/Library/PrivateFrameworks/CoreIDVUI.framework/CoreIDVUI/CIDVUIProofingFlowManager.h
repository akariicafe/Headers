@class _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager;

@interface CIDVUIProofingFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager *proofingFlowManager;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)proofingFlowAvailability:(id /* block */)a0;
- (id)proofingFlowViewController;
- (void)startProofing:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)currentProofingEligibilityStatus;

@end
