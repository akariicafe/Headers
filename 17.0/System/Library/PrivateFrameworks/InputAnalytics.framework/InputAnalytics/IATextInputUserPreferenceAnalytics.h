@class IATextInputUserPreferenceServer;

@interface IATextInputUserPreferenceAnalytics : NSObject

@property (retain, nonatomic) IATextInputUserPreferenceServer *server;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)reportStateForUserPreference:(long long)a0;
- (void)reportStateForUserPreferences:(id)a0;

@end
