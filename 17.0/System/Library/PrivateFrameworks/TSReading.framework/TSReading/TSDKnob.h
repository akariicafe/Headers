@class TSDBezierPath, TSDRep, CAShapeLayer, CALayer;

@interface TSDKnob : NSObject {
    CALayer *mLayer;
    CAShapeLayer *mHitRegionLayer;
}

@property (nonatomic) int type;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) BOOL offsetValid;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double radius;
@property (nonatomic) unsigned long long tag;
@property (readonly, nonatomic) CALayer *layer;
@property (copy, nonatomic) TSDBezierPath *hitRegionPath;
@property (readonly, nonatomic) TSDRep *rep;
@property (nonatomic) BOOL worksWhenRepLocked;
@property (nonatomic) BOOL worksWhenInVersionBrowsingMode;
@property (nonatomic) BOOL shouldDisplayDirectlyOverRep;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)knobImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxOfHitRegionForRep:(id)a0 scale:(double)a1;
- (int)dragType;
- (id)hitRegionLayerForRep:(id)a0;
- (double)i_rotationInDegreesForKnobOnRep:(id)a0;
- (id)initWithType:(int)a0 position:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 tag:(unsigned long long)a3 onRep:(id)a4;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint { double x0; double x1; })a0 andRep:(id)a1;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint { double x0; double x1; })a0 andRep:(id)a1 returningDistance:(double *)a2;
- (BOOL)obscuresKnob:(id)a0;
- (BOOL)overlapsWithKnob:(id)a0;
- (void)updateHitRegionPathForRep:(id)a0;

@end
