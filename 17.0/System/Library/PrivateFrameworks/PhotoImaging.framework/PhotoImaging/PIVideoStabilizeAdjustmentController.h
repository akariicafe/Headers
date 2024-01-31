@class NSArray;

@interface PIVideoStabilizeAdjustmentController : PIAdjustmentController

@property (nonatomic) double cropFraction;
@property (nonatomic) unsigned long long analysisType;
@property (copy, nonatomic) NSArray *keyframes;
@property (nonatomic) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } stabCropRect;

+ (id)stabCropRectKey;
+ (id)keyframesKey;

- (BOOL)isEqual:(id)a0 forKeys:(id)a1;
- (id)pasteKeysForMediaType:(long long)a0;

@end
