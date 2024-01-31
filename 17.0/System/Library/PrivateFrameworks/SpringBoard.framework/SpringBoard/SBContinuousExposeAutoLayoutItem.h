@class SBDisplayItem;

@interface SBContinuousExposeAutoLayoutItem : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct CGPoint { double x; double y; } unoccludedPeekingPosition;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPosition;
@property (nonatomic) struct CGPoint { double x; double y; } compactedPosition;
@property (nonatomic, getter=isInDefaultPosition) BOOL inDefaultPosition;
@property (nonatomic, getter=isOverlapped) BOOL overlapped;
@property (nonatomic, getter=isFullyOccluded) BOOL fullyOccluded;
@property (nonatomic, getter=isPartiallyCoveredByPeekingItem) BOOL partiallyCoveredByPeekingItem;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayItem:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
