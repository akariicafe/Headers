@class LPLinkRendererSizeClassParameters, UITraitCollection;

@interface LPLinkSnapshotConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) unsigned long long preferredSizeClass;
@property (retain, nonatomic) LPLinkRendererSizeClassParameters *sizeClassParameters;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) double scale;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTraitCollection:(id)a0 preferredSizeClass:(unsigned long long)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (id)initWithTraitCollection:(id)a0 preferredSizeClass:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;

@end
