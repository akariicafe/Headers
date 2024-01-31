@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)handlePreferencesOrProfileChanged;
- (void)dealloc;
- (void)start:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;

@end
