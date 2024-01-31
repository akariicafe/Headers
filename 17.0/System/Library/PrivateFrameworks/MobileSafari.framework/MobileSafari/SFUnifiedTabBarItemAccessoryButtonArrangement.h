@class NSArray;

@interface SFUnifiedTabBarItemAccessoryButtonArrangement : NSObject

@property (readonly, copy, nonatomic) NSArray *leadingButtonTypes;
@property (readonly, copy, nonatomic) NSArray *trailingButtonTypes;

- (id)init;
- (BOOL)isEqualToArrangement:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsButtonType:(long long)a0;
- (id)initUsingButtonLayout:(long long)a0 filteringButtonsUsingBlock:(id /* block */)a1;
- (id)initWithLeadingButtonTypes:(id)a0 trailingButtonTypes:(id)a1;

@end
