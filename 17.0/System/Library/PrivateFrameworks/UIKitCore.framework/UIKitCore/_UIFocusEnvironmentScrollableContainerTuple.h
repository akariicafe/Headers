@protocol UIFocusEnvironment, UIFocusItemScrollableContainer;

@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject

@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<UIFocusItemScrollableContainer> scrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;
+ (id)tupleWithScrollView:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOwningEnvironment:(id)a0 scrollableContainer:(id)a1;

@end
