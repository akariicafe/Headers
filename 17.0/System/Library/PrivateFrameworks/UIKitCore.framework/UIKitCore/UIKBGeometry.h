@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic, setter=setX:) struct { double amount; int unit; } x;
@property (nonatomic, setter=setY:) struct { double amount; int unit; } y;
@property (nonatomic, setter=setW:) struct { double amount; int unit; } w;
@property (nonatomic, setter=setH:) struct { double amount; int unit; } h;
@property (nonatomic, setter=setPaddingTop:) struct { double amount; int unit; } paddingTop;
@property (nonatomic, setter=setPaddingLeft:) struct { double amount; int unit; } paddingLeft;
@property (nonatomic, setter=setPaddingBottom:) struct { double amount; int unit; } paddingBottom;
@property (nonatomic, setter=setPaddingRight:) struct { double amount; int unit; } paddingRight;
@property (nonatomic) BOOL explicitlySpecified;
@property (nonatomic) BOOL isTemplate;

+ (id)geometry;
+ (id)codeStringForValue:(struct { double x0; int x1; })a0;
+ (id)geometryWithOriginValue:(struct { double x0; int x1; })a0 sizeValue:(struct { double x0; int x1; })a1;
+ (id)geometryWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)performOperations:(id /* block */)a0 withScale:(double)a1;

- (id)initWithName:(id)a0 rect:(struct { struct { double x0; int x1; } x0[4]; })a1 padding:(struct { struct { double x0; int x1; } x0[4]; })a2;
- (id)init;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)overrideGeometry:(id)a0;
- (id)initTemplateWithName:(id)a0 rect:(struct { struct { double x0; int x1; } x0[4]; })a1 padding:(struct { struct { double x0; int x1; } x0[4]; })a2;
- (BOOL)usesPercentages;
- (void)encodeWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContainingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)usesAutomaticMetrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedFrameWithContainingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedFrameWithResolvedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
