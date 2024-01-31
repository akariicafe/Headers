@class UIView, NSString, MUEdgeLayout, MKVibrantView, UIImageView, MUStackLayout, UILabel, UIColor;
@protocol MUActionRowItemViewDelegate;

@interface MUActionRowItemView : UIButton {
    UILabel *_label;
    UIImageView *_glyphImageView;
    UIView *_accessoryContainerView;
    MKVibrantView *_vibrantView;
    UIView *_backgroundView;
    MUEdgeLayout *_edgeLayout;
    MUStackLayout *_iconLabelStackLayout;
}

@property (nonatomic) BOOL touched;
@property (nonatomic) BOOL hovering;
@property (nonatomic) BOOL showSelectedState;
@property (weak, nonatomic) id<MUActionRowItemViewDelegate> delegate;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *glyphName;
@property (copy, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL fullWidthMode;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *glyphColor;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL useVibrancy;

+ (id)labelFont;
+ (id)glyphFont;

- (id)accessibilityLabel;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)updateImage;
- (void)setAccessibilityLabel:(id)a0;
- (void)tintColorDidChange;
- (void)setTintColor:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setMenu:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_contentSizeDidChange;
- (void)_touchBegan;
- (void)infoCardThemeChanged;
- (void)_updateMetrics;
- (void)handleHoverGesture:(id)a0;
- (void)_touchCancelled;
- (void)_applyBorderIfNeeded;
- (void)_touchEnded;
- (void)handleMenuPresentation;
- (void)handlePress;
- (id)initWithStyle:(long long)a0 useVibrancy:(BOOL)a1;
- (void)updateColor;

@end
