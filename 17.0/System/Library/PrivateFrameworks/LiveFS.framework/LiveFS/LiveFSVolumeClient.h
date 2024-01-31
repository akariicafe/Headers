@class NSMutableDictionary, NSMapTable;

@interface LiveFSVolumeClient : NSObject <LiveFSCoreClient>

@property (retain) NSMutableDictionary *searchResultsBlocks;
@property (retain) NSMutableDictionary *searchCompletionBlocks;
@property (retain) NSMapTable *updateHandlers;

+ (id)exportedClientInterface;

- (id)init;
- (void)connectionWasInvalidated;
- (void).cxx_destruct;
- (int)LISCAddUpdateHandler:(id)a0 forInterestedItem:(id)a1;
- (void)updatesDoneFor:(id)a0;
- (int)LISCAddSearchHandlers:(id)a0 resultHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)LISCDropUpdateHandlerForInterestedItem:(id)a0;
- (void)renamedItem:(id)a0 named:(id)a1 fromDirectory:(id)a2 intoDirectory:(id)a3 newName:(id)a4 atopItem:(id)a5;
- (void)connectionWasInterupted;
- (void)deletedItem:(id)a0 name:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)deletedName:(id)a0 item:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)historyResetItem:(id)a0 interestedItem:(id)a1;
- (void)historyResetName:(id)a0 interestedItem:(id)a1;
- (void)updatedItem:(id)a0 name:(id)a1 interestedItem:(id)a2;
- (void)updatedName:(id)a0 interestedItem:(id)a1;
- (void)volumeWideDeletedName:(id)a0 interestedItem:(id)a1;
- (void)volumeWideUpdatedName:(id)a0 interestedItem:(id)a1;
- (void)LISCDropSearchHandlers:(id)a0;
- (void)searchResults:(id)a0 paths:(id)a1 attributes:(id)a2 attributeSize:(unsigned int)a3 xAttrs:(id)a4 resumePath:(id)a5;
- (void)tokenDone:(id)a0 result:(int)a1;

@end
