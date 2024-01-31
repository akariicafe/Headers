@class NSArray;

@interface UIAccessibilityHitTestOptions : NSObject

@property (copy, nonatomic) id /* block */ leafNodePredicate;
@property (copy, nonatomic) id /* block */ fallbackPredicate;
@property (copy, nonatomic) id /* block */ isEligibleElement;
@property (nonatomic) BOOL shouldHitTestUserTestingChildren;
@property (retain, nonatomic) NSArray *outOfBoundsHitTestElements;

+ (id)defaultOptions;
+ (id)dwellControlElementHighlightOptions;

- (void).cxx_destruct;

@end
