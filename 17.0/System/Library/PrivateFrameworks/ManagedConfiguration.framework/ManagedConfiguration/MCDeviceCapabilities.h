@interface MCDeviceCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption;
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption;
@property (readonly, nonatomic) BOOL hasSEP;

+ (id)currentDevice;

- (id)init;
- (BOOL)_mediaDiskIsEncrypted;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)a0 localizedIncompatibilityMessage:(id)a1 outError:(id *)a2;

@end
