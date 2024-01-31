@class NSString, NSArray, NSLocale;

@interface CKVTokenChain : NSObject <KVTokenChain, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *normalizedString;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;

+ (id)tokenChainBuilderForString:(id)a0 locale:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateTokensUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cleanText;
- (id)initWithString:(id)a0 locale:(id)a1 tokens:(id)a2;
- (BOOL)isEqualToTokenChain:(id)a0;

@end
