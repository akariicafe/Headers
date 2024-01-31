@class NSManagedObjectContext;

@interface HMDAppleMediaAccessorySensorManagerDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore> {
    NSManagedObjectContext *_localMOC;
}

- (void).cxx_destruct;
- (void)saveSensorUUID:(id)a0;
- (void)fetchSensorUUIDWithCompletion:(id /* block */)a0;
- (void)saveSensorUUID:(id)a0 completion:(id /* block */)a1;
- (id)initWithLocalMOC:(id)a0;

@end
