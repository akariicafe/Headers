@class NSString;

@interface ICCompatibilityControllerDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long notesVersion;
@property (nonatomic) long long maximumNotesVersion;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isUpgraded) BOOL upgraded;
@property (readonly, nonatomic, getter=isUpgradable) BOOL upgradable;

+ (long long)maximumNotesVersionForHardwareInfo:(struct ICDeviceHardwareInfo { unsigned long long x0; long long x1; long long x2; })a0;
+ (long long)notesVersionForDeviceInfo:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMigrationDeviceInfo:(id)a0;
- (id)initWithNotesVersion:(long long)a0 maximumNotesVersion:(long long)a1 name:(id)a2;

@end
