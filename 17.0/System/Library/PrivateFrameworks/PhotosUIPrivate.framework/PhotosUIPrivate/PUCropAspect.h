@class NSString;

@interface PUCropAspect : NSObject

@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double ratio;
@property (readonly, nonatomic) NSString *localizedName;
@property (nonatomic) BOOL allowOrientationChange;

+ (id)allAspectsWithOriginalSize:(struct CGSize { double x0; double x1; })a0 currentSize:(struct CGSize { double x0; double x1; })a1;
+ (id)originalAspectForWidth:(unsigned long long)a0 height:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithWidth:(double)a0 height:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)heightForWidth:(double)a0;
- (double)widthForHeight:(double)a0;
- (id)_initWithWidth:(double)a0 height:(double)a1 localizedName:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 boundingAngle:(double)a2 minSize:(struct CGSize { double x0; double x1; })a3;
- (id)inverseAspect;
- (BOOL)isEqualToCropAspect:(id)a0;
- (BOOL)isEquivalentToCropAspect:(id)a0;
- (BOOL)isFreeformCrop;

@end
