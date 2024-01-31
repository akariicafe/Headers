@class NSString;
@protocol AKAnisetteServiceProtocol;

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol>

@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)provisionAnisetteForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAnisetteDataForContext:(id)a0 provisionIfNecessary:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)syncAnisetteForContext:(id)a0 withSIMData:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)eraseAnisetteForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithProvider:(id)a0;
- (void)fetchPeerAttestationDataForContext:(id)a0 withRequest:(id)a1 completion:(id /* block */)a2;
- (void)legacyAnisetteDataForContext:(id)a0 DSID:(id)a1 withCompletion:(id /* block */)a2;

@end
