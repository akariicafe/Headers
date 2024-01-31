@class MBDeviceTransferProgress, NSString, MBDeviceTransferConnectionInfo, NSDateComponentsFormatter;

@interface BFFMigrationTimeRemainingController : BFFTimeRemainingController

@property (retain, nonatomic) NSDateComponentsFormatter *elapsedDurationFormatter;
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo;
@property (retain, nonatomic) MBDeviceTransferProgress *migrationProgress;
@property (retain) NSString *internalProgressText;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)setDeviceConnectionInformation:(id)a0;
- (void)setDeviceTransferProgress:(id)a0;
- (id)timeRemainingString:(double)a0;
- (void)updateProgressSubtext;

@end
