@class NSString;

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) long long limit;

+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 limit:(long long)a3 clientID:(id)a4;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2 limit:(long long)a3;
- (id)_collectionRequestWithClientID:(id)a0;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 limit:(long long)a3 clientID:(id)a4;
- (id)collectionRequestWithClientID:(id)a0;

@end
