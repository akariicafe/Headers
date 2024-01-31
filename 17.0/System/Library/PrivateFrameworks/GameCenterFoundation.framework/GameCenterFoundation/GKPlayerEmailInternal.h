@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) BOOL verified;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
