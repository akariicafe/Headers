@interface AAUID2DEncryptionFlowContext : CDPUIDeviceToDeviceEncryptionFlowContext

@property (nonatomic) unsigned long long contextType;

+ (id)contextWithType:(unsigned long long)a0;
+ (id)contextWithType:(unsigned long long)a0 altDSID:(id)a1;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 altDSID:(id)a1;
- (long long)deviceToDeviceEncryptionUpgradeType;
- (long long)deviceToDeviceEncryptionUpgradeUIStyle;
- (BOOL)requiresSynchronousRepair;

@end
