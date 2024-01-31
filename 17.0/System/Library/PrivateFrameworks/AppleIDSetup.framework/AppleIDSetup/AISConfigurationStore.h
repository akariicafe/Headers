@class NSError, AISChildAccountCutOffAgeResponse;

@interface AISConfigurationStore : NSObject <AISChildSetupStoreProtocol>

@property (nonatomic, retain) void /* unknown type, empty encoding */ cachedChildCutOffResponse;

- (id)init;
- (void).cxx_destruct;
- (void)fetchMaxAgeForChildAccountWithCompletionHandler:(void (^)(AISChildAccountCutOffAgeResponse *, NSError *))a0;

@end
