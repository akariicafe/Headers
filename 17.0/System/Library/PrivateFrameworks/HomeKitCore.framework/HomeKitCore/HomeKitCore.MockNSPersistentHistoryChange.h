@class NSString, NSDictionary, NSSet, NSManagedObjectID;

@interface HomeKitCore.MockNSPersistentHistoryChange : NSPersistentHistoryChange {
    void /* unknown type, empty encoding */ mockChangeID;
    void /* unknown type, empty encoding */ mockTombstone;
    void /* unknown type, empty encoding */ mockChangeType;
    void /* unknown type, empty encoding */ mockChangedObjectID;
    void /* unknown type, empty encoding */ mockUpdatedProperties;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) NSDictionary *tombstone;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) NSManagedObjectID *changedObjectID;
@property (nonatomic, readonly) NSSet *updatedProperties;

- (id)init;
- (void).cxx_destruct;

@end
