@class NSString, NSURL;

@interface CPSWebRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callbackScheme;
@property (readonly, nonatomic) NSURL *URL;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 callbackScheme:(id)a1;

@end
