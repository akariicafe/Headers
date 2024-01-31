@interface DRSCKConfig : NSObject

@property (readonly, nonatomic) unsigned char rapidEnvironment;
@property (readonly, nonatomic) unsigned char containerEnvironment;
@property (readonly, nonatomic) BOOL overridesDefault;
@property (readonly, nonatomic) long long ckRapidEnvironment;
@property (readonly, nonatomic) long long ckContainerEnvironment;

+ (id)_configWithConfigMO_ON_MOC_QUEUE:(id)a0;
+ (id)defaultConfig;

- (id)init;
- (id)newConfigMOInContext_ON_MOC_QUEUE:(id)a0;
- (id)description;
- (id)initWithContainerEnvironment:(unsigned char)a0 rapidEnvironment:(unsigned char)a1 overridesDefault:(BOOL)a2;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
