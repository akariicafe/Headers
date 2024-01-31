@class UIBackgroundConfiguration, NSString, UIContentUnavailableImageProperties, UIImage, NSAttributedString, UIContentUnavailableTextProperties, UIContentUnavailableButtonProperties, UIButtonConfiguration;

@interface UIContentUnavailableConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedPrefersSideBySideButtonAndSecondaryButton : 1; unsigned char hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; unsigned char hasCustomizedDirectionalLayoutMargins : 1; unsigned char hasCustomizedImageToTextPadding : 1; unsigned char hasCustomizedTextToSecondaryTextPadding : 1; unsigned char hasCustomizedTextToButtonPadding : 1; unsigned char hasCustomizedButtonToSecondaryButtonPadding : 1; } _configurationFlags;
    BOOL _prefersSideBySideButtonAndSecondaryButton;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    double _imageToTextPadding;
    double _textToSecondaryTextPadding;
    double _textToButtonPadding;
    double _buttonToSecondaryButtonPadding;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _directionalLayoutMargins;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIContentUnavailableImageProperties *imageProperties;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *secondaryTextProperties;
@property (retain, nonatomic) UIButtonConfiguration *button;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *buttonProperties;
@property (retain, nonatomic) UIButtonConfiguration *secondaryButton;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *secondaryButtonProperties;
@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic) double textToSecondaryTextPadding;
@property (nonatomic) double textToButtonPadding;
@property (nonatomic) double buttonToSecondaryButtonPadding;
@property (retain, nonatomic) UIBackgroundConfiguration *background;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyConfiguration;
+ (id)emptyProminentConfiguration;
+ (id)loadingConfiguration;
+ (id)emptyExtraProminentConfiguration;
+ (id)searchConfiguration;

- (id)updatedConfigurationForState:(id)a0;
- (id)makeContentView;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setSwiftBridgingSecondaryButtonProperties:(id)a0;
- (void)_setSwiftBridgingButtonProperties:(id)a0;
- (void)_setSwiftBridgingImageProperties:(id)a0;
- (void)_setSwiftBridgingTextProperties:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
