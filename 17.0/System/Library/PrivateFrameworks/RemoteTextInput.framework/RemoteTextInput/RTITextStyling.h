@class NSString, NSMutableDictionary;

@interface RTITextStyling : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) double fontWeight;
@property (readonly, nonatomic) NSMutableDictionary *attributes;

+ (id)textStylingWithFontName:(id)a0 fontSize:(double)a1 fontWeight:(double)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttributes:(id)a0;

@end
