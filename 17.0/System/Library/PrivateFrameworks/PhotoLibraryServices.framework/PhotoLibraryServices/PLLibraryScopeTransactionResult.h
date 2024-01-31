@class NSArray, NSPersistentHistoryToken;

@interface PLLibraryScopeTransactionResult : NSObject

@property (readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken;
@property (readonly, copy) NSArray *assetObjectIDs;
@property (readonly, copy) NSArray *detectedFaceObjectIDs;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 assetObjectIDs:(id)a1 detectedFaceObjectIDs:(id)a2;

@end
