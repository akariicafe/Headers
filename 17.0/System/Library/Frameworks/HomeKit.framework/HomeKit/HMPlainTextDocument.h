@class NSString, NSAttributedString, _HMDocument;

@interface HMPlainTextDocument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) _HMDocument *document;
@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

+ (id)logCategory;

- (unsigned long long)hash;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
