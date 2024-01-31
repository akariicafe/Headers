@class UIColor, UIFont, NSString, NSAttributedString;

@interface UIContentUnavailableTextProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedText : 1; unsigned char hasCustomizedFont : 1; unsigned char hasCustomizedColor : 1; unsigned char hasCustomizedLineBreakMode : 1; unsigned char hasCustomizedAttributedText : 1; unsigned char hasCustomizedNumberOfLines : 1; unsigned char hasCustomizedAdjustsFontSizeToFitWidth : 1; unsigned char hasCustomizedMinimumScaleFactor : 1; unsigned char hasCustomizedAllowsDefaultTighteningForTruncation : 1; } _textFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
    long long _lineBreakMode;
    NSAttributedString *_attributedText;
    long long _numberOfLines;
    double _minimumScaleFactor;
    long long _alignment;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
