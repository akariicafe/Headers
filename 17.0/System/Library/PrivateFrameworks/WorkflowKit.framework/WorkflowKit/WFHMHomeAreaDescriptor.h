@class NSUUID, NSString;

@interface WFHMHomeAreaDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long areaType;
@property (readonly, nonatomic) NSString *homeName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHome:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 homeIdentifier:(id)a1 name:(id)a2 areaType:(unsigned long long)a3 homeName:(id)a4;
- (id)initWithRoom:(id)a0 inHome:(id)a1;
- (id)initWithZone:(id)a0 inHome:(id)a1;

@end
