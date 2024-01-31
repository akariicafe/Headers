@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPHomeSharingRentalTracker : NSObject {
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)addRentalWithItemID:(unsigned long long)a0 databaseID:(id)a1;
- (void)_saveRentals;
- (void)removeAllRentalsForDatabaseID:(id)a0;
- (void)removeRentalWithItemID:(unsigned long long)a0;

@end
