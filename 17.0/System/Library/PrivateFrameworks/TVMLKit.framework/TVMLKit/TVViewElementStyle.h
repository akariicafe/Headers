@class IKViewElementStyle, NSString, TVAppStyle, NSShadow, TVColor, NSMutableDictionary;

@interface TVViewElementStyle : NSObject <NSCopying> {
    NSMutableDictionary *_cachedColorObjects;
}

@property (readonly, weak, nonatomic) IKViewElementStyle *style;
@property (retain, nonatomic) TVAppStyle *styleMetrics;
@property (readonly, nonatomic) NSString *textTransform;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) TVColor *backgroundColor;
@property (readonly, nonatomic) TVColor *color;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) NSString *fontWeight;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } margin;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } focusMargin;
@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double maxWidth;
@property (readonly, nonatomic) double minHeight;
@property (readonly, nonatomic) double minWidth;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) long long contentAlignment;
@property (readonly, nonatomic) TVColor *highlightColor;
@property (readonly, nonatomic) NSString *imageTreatmentName;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) NSString *textHighlightStyle;
@property (readonly, nonatomic) double textMinimumScaleFactor;
@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) NSString *ratingStyle;
@property (readonly, nonatomic) unsigned long long maxTextLines;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) TVColor *tintColor;

- (id)initWithStyle:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)darkTintColor;
- (id)cssValueForStyleProperty:(id)a0;
- (id)valueForStyleProperty:(id)a0;

@end
