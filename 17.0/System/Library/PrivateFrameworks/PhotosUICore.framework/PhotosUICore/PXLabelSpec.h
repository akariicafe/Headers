@class UIColor, UIFont, NSDictionary;

@interface PXLabelSpec : PXViewSpec

@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) NSDictionary *fallbackTextAttributes;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long capitalization;
@property (nonatomic) long long fallbackCapitalization;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;

+ (id)_memoriesLabelSpecForContext:(struct { long long x0; long long x1; long long x2; long long x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; BOOL x5; })a0;
+ (id)memoriesLabelSpecForLabelKind:(long long)a0 descriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a1 featureSpec:(id)a2;
+ (id)memoriesLabelSpecForLabelKind:(long long)a0 tileKind:(long long)a1 featureSpec:(id)a2 boundedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)memoriesLabelSpecForLabelKind:(long long)a0 tileKind:(long long)a1 gadgetSpec:(id)a2 boundedByRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (id)memoriesLabelSpecForLabelKind:(long long)a0 tileKind:(long long)a1 specSet:(long long)a2 variant:(long long)a3 boundedBy:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 shouldScale:(BOOL)a5;
+ (id)px_headerSubtitleLabelSpecForZoomLevel:(long long)a0 featureSpec:(id)a1;
+ (id)px_headerTitleLabelSpecForZoomLevel:(long long)a0 featureSpec:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
