@interface ASCImageRenderer : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;
@property (readonly, nonatomic) long long renderingMode;

+ (id)systemImageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)bundleImageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)description;
- (id)imageWithActions:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 renderingMode:(long long)a2;

@end
