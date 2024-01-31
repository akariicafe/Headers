@interface HRERecommendableObjectCountRule : HRERecommendableObjectTypeRule

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } allowedCount;

+ (id)ruleWithAccessoryType:(id)a0 allowedCount:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)initWithAccessoryType:(id)a0 allowedCount:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)passesWithHomeObjects:(id)a0;

@end
