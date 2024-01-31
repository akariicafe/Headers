@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UIFocusEnvironmentContainerTuple : NSObject

@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> itemContainer;
@property (readonly, nonatomic) BOOL isScrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)a0 itemContainer:(id)a1;
+ (id)tupleWithRequiredContainerFromEnvironment:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;

@end
