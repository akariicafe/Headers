@class UIColor;

@interface UIKBCachedImage : UIImage

@property (readonly, nonatomic) BOOL hasFormatColor;
@property (retain, nonatomic) UIColor *formatColor;

+ (BOOL)supportsSecureCoding;

@end
