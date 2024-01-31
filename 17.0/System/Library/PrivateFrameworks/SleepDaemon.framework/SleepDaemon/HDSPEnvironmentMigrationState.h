@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState

- (void)didEnter;
- (void)dataMigrationDidComplete;
- (id)stateName;

@end
