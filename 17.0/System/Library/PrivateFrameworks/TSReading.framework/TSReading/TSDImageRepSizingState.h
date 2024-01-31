@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject

@property (nonatomic) struct CGSize { double width; double height; } desiredSize;
@property (readonly, nonatomic) BOOL wideGamut;
@property (retain, nonatomic) TSDImageProvider *provider;
@property (nonatomic) int status;
@property (nonatomic) struct CGImage { } *sizedImage;
@property (readonly, nonatomic) BOOL sizedImageHasMask;
@property (nonatomic) long long sizedImageOrientation;
@property (readonly, nonatomic) struct CGPath { } *maskPath;
@property (nonatomic) BOOL sizedImageIncludesAdjustments;

- (void)dealloc;
- (void)generateSizedImage;
- (id)initWithDesiredSize:(struct CGSize { double x0; double x1; })a0 provider:(id)a1 maskPath:(struct CGPath { } *)a2 wideGamutCanvas:(BOOL)a3;

@end
