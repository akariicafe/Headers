@class PPSQLDatabase, HKHealthStore;

@interface PPHealthKitImporter : NSObject {
    HKHealthStore *_healthStore;
    PPSQLDatabase *_db;
}

- (id)initWithDatabase:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)importHealthKitData;
- (void)importHealthKitDataWithShouldContinueBlock:(id /* block */)a0;

@end
