@class NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator, NSArray, NSMutableArray, NSManagedObjectContext;

@interface PFUbiquityPeerRangeReservationContext : NSObject {
    NSMutableDictionary *_peerEntityNameRangeStartSet;
    NSMutableDictionary *_globalIDToLocalURI;
    NSMutableArray *_unresolvedGlobalObjectIDs;
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_storeNameToFetchedMetadata;
    NSArray *_globalObjectIDs;
    long long _numRangesToReserve;
}

- (id)init;
- (void)dealloc;
- (id)initWithPersistentStore:(id)a0 andGlobalObjectIDs:(id)a1;

@end
