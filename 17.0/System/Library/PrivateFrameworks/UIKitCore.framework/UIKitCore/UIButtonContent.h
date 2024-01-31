@class UIColor, NSString, NSNumber, UIImage, NSAttributedString, UIImageSymbolConfiguration;

@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    BOOL isWidthVariant;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImage *background;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) NSNumber *drawingStroke;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)encodeWithCoder:(id)a0;
- (BOOL)updateVariableLengthStringForView:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;

@end
