@class NSString;

@interface PKExpressTransactionBannerHandleRequest : PKBannerHandleRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passUniqueIdentifier;

+ (id)createForPassUniqueIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
