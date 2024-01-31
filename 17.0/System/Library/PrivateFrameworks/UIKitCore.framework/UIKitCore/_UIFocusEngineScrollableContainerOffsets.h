@class _UIFocusEnvironmentScrollableContainerTuple;
@protocol UIScrollViewDelegate;

@interface _UIFocusEngineScrollableContainerOffsets : NSObject

@property (nonatomic) BOOL adjustsTargetsOnContentOffsetChanges;
@property (retain, nonatomic) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer;
@property (retain, nonatomic) id<UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) struct CGPoint { double x; double y; } startContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastRoundedOffset;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) double convergenceRate;
@property (nonatomic) struct CGPoint { double x; double y; } lastVelocity;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
