@interface STUIStatusBarStyleRequest : UIStatusBarStyleRequest

@property (readonly, nonatomic) long long resolvedStyle;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithResolvedStyle:(long long)a0 foregroundColor:(id)a1;

@end
