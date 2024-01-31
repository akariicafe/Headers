@class NSString, NSSet;

@interface HDStateSyncEntitySchema : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSSet *dataKeys;

+ (id)schemaWithDomain:(id)a0 dataKeys:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWithDomain:(id)a0 dataKeys:(id)a1;

@end
