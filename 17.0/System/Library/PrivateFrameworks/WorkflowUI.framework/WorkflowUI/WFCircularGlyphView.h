@class UIColor, NSString, UIImageView, UIView;

@interface WFCircularGlyphView : UIView

@property (retain, nonatomic) NSString *glyphName;
@property (retain, nonatomic) UIColor *glyphColor;
@property (retain, nonatomic) UIColor *glyphBackgroundColor;
@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (nonatomic) double imagePointSize;

- (id)glyphImage;
- (void).cxx_destruct;
- (void)configureViews;
- (void)configureBackgroundColorView;
- (void)configureGlyphImageView;
- (id)initWithName:(id)a0 glyphColor:(id)a1 backgroundColor:(id)a2;

@end
