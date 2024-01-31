@class UIColor, UIImage, UIImageSymbolConfiguration;

@interface UIContentUnavailableImageProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedPreferredSymbolConfiguration : 1; unsigned char hasCustomizedTintColor : 1; unsigned char hasCustomizedCornerRadius : 1; unsigned char hasCustomizedMaximumSize : 1; unsigned char hasCustomizedAccessibilityIgnoresInvertColors : 1; } _imageFlags;
    BOOL _accessibilityIgnoresInvertColors;
    UIImage *_image;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIColor *_tintColor;
    double _cornerRadius;
    struct CGSize { double width; double height; } _maximumSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
