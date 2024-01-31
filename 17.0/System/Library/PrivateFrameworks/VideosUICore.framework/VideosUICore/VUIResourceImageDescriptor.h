@class NSString, UIColor, UIImageSymbolConfiguration;

@interface VUIResourceImageDescriptor : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL scaleToSize;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly, nonatomic) double aspectRatio;
@property (nonatomic, getter=shouldRenderAsTemplate) BOOL renderAsTemplate;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) long long scaleMode;
@property (copy, nonatomic) NSString *accessibilityText;

- (void).cxx_destruct;
- (id)initWithResource:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithResource:(id)a0 size:(struct CGSize { double x0; double x1; })a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithSymbol:(id)a0 size:(struct CGSize { double x0; double x1; })a1 symbolConfiguration:(id)a2;

@end
