@class UIFont, NSString, UIColor, NSAttributedString;

@interface _UIContentViewLabelConfiguration : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedFont : 1; unsigned char hasCustomizedTextColor : 1; unsigned char hasCustomizedTextAlignment : 1; unsigned char hasCustomizedLineBreakMode : 1; unsigned char hasCustomizedNumberOfLines : 1; unsigned char hasCustomizedAdjustsFontSizeToFitWidth : 1; unsigned char hasCustomizedMinimumScaleFactor : 1; unsigned char hasCustomizedAllowsDefaultTighteningForTruncation : 1; unsigned char hasCustomizedAdjustsFontForContentSizeCategory : 1; } _configurationFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    long long _lineBreakMode;
    NSAttributedString *_attributedText;
    long long _numberOfLines;
    double _minimumScaleFactor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (readonly, nonatomic) long long _effectiveTextAlignment;
@property (readonly, nonatomic) BOOL _hasNonEmptyPlainTextOnly;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToLabel:(id)a0;

@end
