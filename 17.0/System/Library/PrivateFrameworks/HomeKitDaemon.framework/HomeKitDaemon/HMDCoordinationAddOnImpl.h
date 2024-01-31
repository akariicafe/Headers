@protocol HMDCoordinationAddOnImplDelegate;

@interface HMDCoordinationAddOnImpl : COMeshAddOn

@property (weak, nonatomic) id<HMDCoordinationAddOnImplDelegate> delegate;

- (void).cxx_destruct;
- (void)didChangeNodesForMeshController:(id)a0;
- (void)meshController:(id)a0 didTransitionToState:(unsigned long long)a1;

@end
