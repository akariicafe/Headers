@class NSString, UIColor;

@interface TVViewLayout : NSObject

@property (nonatomic) double interitemSpacing;
@property (copy, nonatomic) NSString *progressStyle;
@property (copy, nonatomic) NSString *group;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *darkTintColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *darkBackgroundColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } focusMargin;
@property (nonatomic) double maxHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double minWidth;
@property (nonatomic) double width;
@property (nonatomic) double focusSizeIncrease;
@property (copy, nonatomic) NSString *focusAlign;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long alignment;
@property (nonatomic) long long contentAlignment;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) long long position;
@property (nonatomic) BOOL acceptsFocus;
@property (nonatomic) BOOL centerGrowth;
@property (copy, nonatomic) NSString *highlightStyle;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } focusTransform;

+ (Class)layoutClassForElement:(id)a0;
+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)defaultFocusSizeIncrease;
- (id /* block */)tv_layoutPropertyGetterForStyle:(id)a0;
- (id /* block */)tv_layoutPropertySetterForStyle:(id)a0;

@end
