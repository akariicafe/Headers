@class HAPMatterFirmwareUpdateStatus, NSNumber, HMMTRAccessoryServer;

@interface HMMTRFirmwareUpdateStatus : NSObject

@property (readonly, weak, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus;
@property (retain, nonatomic) NSNumber *downloadedFirmwareVersionNumber;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_updateStateAsString:(unsigned char)a0;
- (void)checkCurrentFirmwareVersionNumber:(id)a0;
- (void)handleOTARequestorAttributeReport:(id)a0;
- (id)initWithFirmwareUpdateStatus:(id)a0 accessoryServer:(id)a1;
- (id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)a0;
- (id)readForHAPFirmwareUpdateStatusCharacteristic:(id)a0;
- (id)readForMatterFirmwareUpdateStatusCharacteristic:(id)a0;
- (void)updateDownloadedFirmwareVersionNumber:(id)a0;
- (void)updateFirmwareUpdateStatus:(long long)a0;

@end
