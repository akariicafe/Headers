@class NSString, NSMutableDictionary;

@interface SHTokenizedURL : NSObject <NSCopying>

@property (copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *tokenURLPath;
@property (copy, nonatomic) NSString *originalURLPath;
@property (retain, nonatomic) NSMutableDictionary *tokenDictionary;

+ (id)replaceToken:(long long)a0 withValue:(id)a1 urlString:(id)a2;
+ (id)tokenForTokenType:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)URLRepresentation;
- (BOOL)updateToken:(long long)a0 withValue:(id)a1;
- (BOOL)containsToken:(long long)a0;
- (BOOL)containsTokens;
- (id)initWithHost:(id)a0 URLPath:(id)a1;

@end
