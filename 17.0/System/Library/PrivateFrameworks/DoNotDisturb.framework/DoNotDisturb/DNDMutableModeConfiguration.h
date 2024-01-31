@class DNDConfiguration, NSString, NSArray, DNDMode, NSDate;

@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (nonatomic) struct { long long x0; long long x1; long long x2; } lastModifiedByVersion;
@property (copy, nonatomic) NSString *lastModifiedByDeviceID;
@property (copy, nonatomic) DNDMode *mode;
@property (copy, nonatomic) DNDConfiguration *configuration;
@property (copy, nonatomic) NSArray *triggers;
@property (nonatomic) unsigned long long impactsAvailability;
@property (nonatomic) unsigned long long dimsLockScreen;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSDate *lastModified;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;

- (void)setAutomaticallyGenerated:(BOOL)a0;
- (void)setImpactsAvailability:(unsigned long long)a0;
- (void)setCreated:(id)a0;
- (void)setTriggers:(id)a0;
- (void)setLastModifiedByDeviceID:(id)a0;
- (void)setLastModifiedByVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)setMode:(id)a0;
- (void)setLastModified:(id)a0;
- (void)setDimsLockScreen:(unsigned long long)a0;
- (void)setCompatibilityVersion:(long long)a0;
- (void)setConfiguration:(id)a0;
- (void)_configurationWasModified;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
