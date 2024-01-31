@class BSColor, NSString, CHSFontSpecification;

@interface CHSInlineTextParameters : NSObject <BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) CHSFontSpecification *fontSpecification;
@property (copy, nonatomic) BSColor *foregroundColor;
@property (nonatomic) BOOL allowsNonSystemForegroundColors;
@property (nonatomic) unsigned long long horizontalAlignment;
@property (nonatomic) BOOL showsDateAlongsideText;
@property (copy, nonatomic) NSString *dateFormat;
@property (nonatomic) BOOL ignoresRTL;
@property (nonatomic) unsigned long long graphicAlignment;
@property (nonatomic) struct CGSize { double width; double height; } graphicMaxSize;
@property (nonatomic) unsigned long long symbolScale;
@property (nonatomic) BOOL forceUppercase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_effectiveDateFormat;
- (id)_initWithInlineTextProperties:(id)a0;

@end
