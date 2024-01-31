@interface STUIStatusBarSystemNavigationAction : STUIStatusBarAction

@property (nonatomic) unsigned long long destination;

+ (id)forwardNavigationAction;
+ (id)backNavigationAction;
+ (id)_navigationActionForDestination:(unsigned long long)a0;

@end
