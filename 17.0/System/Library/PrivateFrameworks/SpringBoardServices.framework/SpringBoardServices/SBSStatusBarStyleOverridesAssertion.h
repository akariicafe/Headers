@interface SBSStatusBarStyleOverridesAssertion : SBSBackgroundActivityAssertion

@property (readonly, nonatomic) unsigned long long statusBarStyleOverrides;

+ (id)assertionWithStatusBarStyleOverrides:(unsigned long long)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
+ (id)backgroundLocationAssertionForPID:(int)a0;

- (id)initWithStatusBarStyleOverrides:(unsigned long long)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;

@end
