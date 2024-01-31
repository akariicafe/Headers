@class NSURL, NSString;

@interface EMListUnsubscribePostValues : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *oneClickURL;
@property (readonly, nonatomic) NSString *postContent;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 postContent:(id)a1;

@end
