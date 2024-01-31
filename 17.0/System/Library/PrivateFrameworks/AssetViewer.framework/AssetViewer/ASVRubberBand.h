@interface ASVRubberBand : NSObject

@property (nonatomic) float rubberBandFactor;
@property (nonatomic) float minOffset;
@property (nonatomic) float maxOffset;
@property (nonatomic) float overshoot;

- (id)initWithRubberBandFactor:(float)a0 minOffset:(float)a1 maxOffset:(float)a2 overshoot:(float)a3;
- (float)offsetForRubberBandOffset:(float)a0;
- (BOOL)offsetIsWithinRubberBandedRange:(float)a0;
- (float)rubberBandOffsetForOffset:(float)a0;

@end
