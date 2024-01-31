@class NSString, AKAnisetteData, NSData, NSError, NSURLRequest, AKAttestationData;

@interface ProximityAppleIDSetup.PASAnisetteDataRequester : SwiftNativeNSObject <AKAnisetteServiceProtocol> {
    void /* unknown type, empty encoding */ messageSessionProvider;
}

- (id)init;
- (void)legacyAnisetteDataForDSID:(NSString *)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)fetchPeerAttestationDataForRequest:(NSURLRequest *)a0 completion:(void (^)(AKAttestationData *, NSError *))a1;
- (void)eraseAnisetteWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)provisionAnisetteWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)syncAnisetteWithSIMData:(NSData *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
