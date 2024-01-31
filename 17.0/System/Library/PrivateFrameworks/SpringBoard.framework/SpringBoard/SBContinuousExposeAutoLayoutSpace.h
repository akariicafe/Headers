@class NSArray, SBContinuousExposeAutoLayoutConfiguration;

@interface SBContinuousExposeAutoLayoutSpace : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) SBContinuousExposeAutoLayoutConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stageArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } compactedBoundingBox;
@property (nonatomic, getter=isStripVisible) BOOL stripVisible;

- (unsigned long long)hash;
- (id)initWithItems:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;
- (id)autoLayoutItemForDisplayItem:(id)a0;
- (id)autoLayoutItemForDisplayItemIfExists:(id)a0;
- (BOOL)containsDisplayItem:(id)a0;

@end
