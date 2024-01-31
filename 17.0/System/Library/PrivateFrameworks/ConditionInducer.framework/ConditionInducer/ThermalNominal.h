@class NSString;

@interface ThermalNominal : COCondition {
    NSString *_thermalLevelKey;
}

@property (nonatomic) long long actualState;
@property (nonatomic) long long desiredState;

+ (id)description;
+ (id)profileFriendlyName;
+ (id)thermalStateEnumToCLTMStringKey:(long long)a0;

- (BOOL)isDestructive;
- (BOOL)setUp;
- (id)init;
- (void)tearDown;
- (BOOL)active;
- (void).cxx_destruct;
- (id)identifierName;
- (id)initWithThermalLevel:(long long)a0;
- (BOOL)isInternalOnly;
- (id)userFriendlyName;

@end
