@class NSString;

@interface ML3OrderingTerm : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) NSString *collation;

+ (id)orderingTermWithProperty:(id)a0;
+ (id)orderingTermWithProperty:(id)a0 direction:(int)a1;
+ (id)reversedTerms:(id)a0;

- (id)initWithProperty:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)appendSQLToMutableString:(id)a0 entityClass:(Class)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 direction:(int)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithProperty:(id)a0 direction:(int)a1 collation:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
