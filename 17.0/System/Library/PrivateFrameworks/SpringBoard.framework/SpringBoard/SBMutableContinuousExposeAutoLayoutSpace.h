@class NSArray, SBContinuousExposeAutoLayoutConfiguration;

@interface SBMutableContinuousExposeAutoLayoutSpace : SBContinuousExposeAutoLayoutSpace

@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) SBContinuousExposeAutoLayoutConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stageArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } compactedBoundingBox;
@property (nonatomic, getter=isStripVisible) BOOL stripVisible;

- (id)autoLayoutItemForDisplayItem:(id)a0;
- (id)autoLayoutItemForDisplayItemIfExists:(id)a0;

@end
