@class _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager;

@interface CIDVUIIdentityProofingDataSharingFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager *dataSharingManager;

- (id)init;
- (void).cxx_destruct;
- (void)checkUserConsent:(id /* block */)a0;
- (void)didChangeUserConsent:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchUserConsent:(id /* block */)a0;

@end
