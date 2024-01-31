@class NSString;

@interface GKCloudPlayer : GKBasePlayer <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;

+ (void)getCurrentSignedInPlayerForContainer:(id)a0 completionHandler:(id /* block */)a1;

- (unsigned long long)hash;
- (id)playerID;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
