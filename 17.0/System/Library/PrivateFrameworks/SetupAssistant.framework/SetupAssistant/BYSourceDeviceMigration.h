@interface BYSourceDeviceMigration : BYDeviceMigrationManager

+ (id)createDeviceTransferTask:(id)a0;

- (void)cancelDeviceTransferTask;
- (BOOL)requiresProcessAssertion;
- (id)sourceDeviceTransferTask;
- (void)startDeviceTransferTask;
- (void)updateFileTransferSession:(id)a0;

@end
