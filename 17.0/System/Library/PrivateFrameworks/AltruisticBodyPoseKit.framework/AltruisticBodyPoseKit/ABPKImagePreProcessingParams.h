@class ABPKDirectScalingParams, ABPKCropParams, ABPKPaddingParams;

@interface ABPKImagePreProcessingParams : NSObject

@property (readonly, nonatomic) ABPKCropParams *cropParams;
@property (readonly, nonatomic) ABPKPaddingParams *paddingParams;
@property (readonly, nonatomic) ABPKDirectScalingParams *scalingParams;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputResolution;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputResolution;

+ (void /* unknown type, empty encoding */)convert2DPoint:(SEL)a0 toInputSpaceWithParams:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 inputResolution:(struct CGSize { double x0; double x1; })a1 outputResolution:(struct CGSize { double x0; double x1; })a2;
- (void)printData;

@end
