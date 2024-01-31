@class NSString;

@interface GEOComposedStringFormatStyle : NSObject <NSCopying, NSSecureCoding> {
    int _type;
    NSString *_token;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
