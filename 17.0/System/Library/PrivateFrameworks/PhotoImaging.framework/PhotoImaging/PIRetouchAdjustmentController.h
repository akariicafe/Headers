@class NSArray;

@interface PIRetouchAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *detectedFaces;

+ (id)inputStrokesKey;
+ (id)modeKey;
+ (id)sourceOffsetKey;
+ (id)clipRectKey;
+ (id)detectedFacesKey;
+ (id)enabledKey;
+ (id)sourceOffsetXKey;
+ (id)sourceOffsetYKey;

- (void)appendStroke:(id)a0;

@end
