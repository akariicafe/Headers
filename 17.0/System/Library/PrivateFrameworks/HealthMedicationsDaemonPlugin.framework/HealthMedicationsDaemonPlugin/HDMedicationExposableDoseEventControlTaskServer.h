@interface HDMedicationExposableDoseEventControlTaskServer : HDStandardTaskServer <HKMedicationExposableDoseEventControlServerInterface>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_deleteDoseEventWithPersistentUUID:(id)a0 completion:(id /* block */)a1;
- (void)remote_doseEventsForDateInterval:(id)a0 medicationIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)remote_writeDoseEvents:(id)a0 completion:(id /* block */)a1;

@end
