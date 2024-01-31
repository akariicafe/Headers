@class NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface WBSHistoryController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_historyMap;
    NSMapTable *_historySessionControllerMap;
}

@property (class, readonly, nonatomic) WBSHistoryController *existingSharedHistoryController;

- (id)init;
- (void)removeProfileWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_createHistoryForProfileIdentifier:(id)a0;
- (id)_createHistorySessionControllerForHistory:(id)a0;
- (id)historyForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)historySessionControllerForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)normalizeProfileIdentifier:(id)a0;

@end
