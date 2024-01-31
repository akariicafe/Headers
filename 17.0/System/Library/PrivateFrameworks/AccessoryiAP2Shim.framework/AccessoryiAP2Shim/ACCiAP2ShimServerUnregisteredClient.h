@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject

@property (readonly, nonatomic) struct SBSProcessAssertion { } *processAssertion;
@property (readonly, nonatomic) long long processAssertionStartTime;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) int processId;

- (id)initWithBundleId:(id)a0;
- (void)releaseProcessAssertion;
- (void).cxx_destruct;
- (id)_applicationInfoForBundleIDSync:(id)a0;
- (int)_getProcessId;
- (void)takeProcessAssertion:(id)a0;

@end
