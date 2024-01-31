@class _UIContentViewLabelConfiguration, NSString, _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration;

@interface _UISubtitleCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; unsigned char hasCustomizedDirectionalLayoutMargins : 1; unsigned char hasCustomizedImageToTextPadding : 1; unsigned char hasCustomizedTextToSubtitlePadding : 1; } _configurationFlags;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    double _imageToTextPadding;
    double _textToSubtitlePadding;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _directionalLayoutMargins;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UIContentViewImageViewConfiguration *imageView;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *subtitleLabel;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic) double textToSubtitlePadding;
@property (copy, nonatomic) _UIContentViewEditingConfiguration *_textLabelEditingConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfiguration;
+ (id)defaultListCellConfigurationForState:(unsigned long long)a0;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)a0;
+ (id)listCellConfiguration;
+ (id)outlineCellConfiguration;

- (id)updatedConfigurationForState:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToContentView:(id)a0;
- (id)createContentView;
- (id)updatedConfigurationForState:(unsigned long long)a0 traitCollection:(id)a1;

@end
