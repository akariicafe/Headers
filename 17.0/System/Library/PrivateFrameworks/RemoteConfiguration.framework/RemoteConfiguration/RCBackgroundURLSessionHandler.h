@class NSString, RCConfigurationSettings;

@interface RCBackgroundURLSessionHandler : NSObject <RCNetworkSessionObserver>

@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) id /* block */ sessionCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)networkSessionDidFinishWithTasks:(id)a0;
- (void)reestablishBackgroundSessionWithConfigurationSettings:(id)a0 sessionCompletionHandler:(id /* block */)a1;

@end
