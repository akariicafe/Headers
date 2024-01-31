@class NSManagedObjectContext, NSDictionary, NSPersistentHistoryToken;
@protocol PLLibraryScopeChangeTrackerDelegate;

@interface PLLibraryScopeChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSManagedObjectContext *_context;
    NSDictionary *_entityNameToAllowedPropertyDescriptionMap;
}

@property (weak, nonatomic) id<PLLibraryScopeChangeTrackerDelegate> delegate;
@property (readonly) BOOL hasChangeTrackerToken;

+ (id)archivedDataWithToken:(id)a0;
+ (id)unarchiveTokentWithData:(id)a0;

- (BOOL)start;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (void)stop;
- (void)updateLastKnownTokenToResult:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)currentToken;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (id)_transactionIteratorSinceToken:(id)a0;
- (id)_allowedPropertyDescriptionsForEntityName:(id)a0;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:(id)a0;

@end
