@class NSDictionary;

@interface ZhuGeBasebandFirmwareSecurityInfoArmory : ZhuGeSingletonArmory

@property (retain) NSDictionary *firmwareSecurityInfo;

+ (id)query:(id)a0 forceCacheable:(BOOL)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (id)query:(id)a0 forceCacheable:(BOOL)a1 withError:(id *)a2;
- (BOOL)loadFirmwareSecurityInfoBootedOS:(id *)a0;
- (BOOL)loadFirmwareSecurityInfoRestoreOS:(id *)a0;

@end
