@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {
    long long _rowIdentifier;
    double _timestamp;
    NSArray *_changes;
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_processID;
    NSString *_contextName;
    NSString *_author;
    NSData *_queryGeneration;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)processID;
- (void)dealloc;
- (id)changes;
- (id)storeID;
- (id)initWithDictionary:(id)a0 andObjectID:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)author;
- (id)contextName;
- (id)bundleID;
- (id)timestamp;
- (long long)transactionNumber;
- (id)_backingObjectID;
- (id)token;
- (id)objectIDNotification;
- (id)initialQueryGenerationToken;
- (id)postQueryGenerationToken;
- (id)initWithCoder:(id)a0;

@end
