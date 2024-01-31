@class NSArray, NSDictionary, WBSPersistentPropertyListStore, NSDate;

@interface WBSPasswordBreachStore : NSObject {
    WBSPersistentPropertyListStore *_store;
}

@property (retain, nonatomic) NSDictionary *queuedPasswordBagManagerState;
@property (retain, nonatomic) NSArray *resultRecords;
@property (retain, nonatomic) NSArray *recentlyBreachedPersistentIdentifiers;
@property (nonatomic) unsigned long long rampIdentifier;
@property (retain, nonatomic) NSDate *lastSessionCompletionDate;

+ (BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:(id)a0 expectedValue:(id)a1;
+ (id)_createPersistentIdentifierCanary;

- (void)saveAndCloseStoreSynchronously;
- (void).cxx_destruct;
- (void)saveStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0;

@end
