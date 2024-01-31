@class UIColor, UIImageView, UIVisualEffectView, UITextField, NSMutableArray;

@interface AKTextField : UIView

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (readonly, nonatomic) UITextField *entryField;
@property (nonatomic) long long rowIdentifier;
@property (nonatomic) BOOL usesVibrancy;
@property (nonatomic) long long blurEffectStyle;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIColor *fieldBackgroundColor;
@property (retain, nonatomic) UIColor *entryDescriptionTextColor;
@property (retain, nonatomic) UIColor *entryFieldTextColor;

- (id)backgroundImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)_fieldTextColor;
- (id)_setupBackgroundViewConstriants;
- (void)drawStrokeForPathRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roundedCorners:(unsigned long long)a1 cornerRadius:(double)a2 pathSegments:(int)a3;
- (void)_drawBackgroundForPathRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roundedCorners:(unsigned long long)a1 cornerRadius:(double)a2 pathSegments:(int)a3;
- (void)_setupInlineEntryStyleViews;
- (void)_setupLabelAndFieldStyles;
- (void)_updateFonts:(id)a0;
- (id)cachedImageUsingBlock:(id /* block */)a0;
- (void)drawFillForPathRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roundedCorners:(unsigned long long)a1 cornerRadius:(double)a2;

@end
