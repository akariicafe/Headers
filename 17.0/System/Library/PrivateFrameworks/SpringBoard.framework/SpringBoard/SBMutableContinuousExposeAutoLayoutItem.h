@interface SBMutableContinuousExposeAutoLayoutItem : SBContinuousExposeAutoLayoutItem

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CGPoint { double x0; double x1; } unoccludedPeekingPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } compactedPosition;
@property (nonatomic, getter=isInDefaultPosition) BOOL inDefaultPosition;
@property (nonatomic, getter=isOverlapped) BOOL overlapped;
@property (nonatomic, getter=isFullyOccluded) BOOL fullyOccluded;
@property (nonatomic, getter=isPartiallyCoveredByPeekingItem) BOOL partiallyCoveredByPeekingItem;


@end
