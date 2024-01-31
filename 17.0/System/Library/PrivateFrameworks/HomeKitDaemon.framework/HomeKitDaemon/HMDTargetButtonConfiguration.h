@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)buttonName;

@end
