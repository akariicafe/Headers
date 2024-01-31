@interface APClientInfoUI : APClientInfo

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)keyboards;
- (id)initForTesting;
- (void)orientationChanged:(id)a0;

@end
