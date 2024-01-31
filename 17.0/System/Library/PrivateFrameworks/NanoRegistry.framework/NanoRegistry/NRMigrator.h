@class NSArray, NRDevice;

@interface NRMigrator : NSObject {
    BOOL _migrating;
}

@property (readonly, nonatomic) BOOL migrationIsAvailable;
@property (readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property (readonly, retain, nonatomic) NSArray *migratableDevices;
@property (readonly, retain, nonatomic) NRDevice *migratingDevice;

+ (id)sharedMigrator;
+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)a0;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)a0;

- (void)isPhoneReadyToMigrateDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)beginMigrationWithDevice:(id)a0 passcode:(id)a1 withBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)migrationConsentRequestData;
- (void)enterPreMigrationMode;
- (id)lastMigrationRequestPhoneName;
- (void)setMigrationConsented:(BOOL)a0 forDevice:(id)a1 withBlock:(id /* block */)a2;
- (id)devicesFromMigrationConsentRequestData:(id)a0;
- (void)setMigrationConsented:(BOOL)a0 forDeviceID:(id)a1 withBlock:(id /* block */)a2;
- (void)beginMigrationWithDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
