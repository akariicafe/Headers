@class NSString, OspreyConnectionPreferences, NSDictionary, OspreyPreferences;

@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating> {
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyPreferences *_allPreferences;
    NSDictionary *_strategies;
    BOOL _hasCurrentStrategyVersion;
}

@property (nonatomic) unsigned long long currentStrategyVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_currentStrategy;
- (unsigned long long)authenticationStrategyVersion;
- (id)initWithChannel:(id)a0 connectionPreferences:(id)a1 allPreferences:(id)a2;
- (void)signData:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;

@end
