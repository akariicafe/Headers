@class WBSHistorySessionController, History, NSOrderedSet, NSPredicate, NSTimer, NSObject;
@protocol OS_dispatch_queue, SFHistoryViewDataSourceDelegate;

@interface SFHistoryViewDataSource : NSObject {
    WBSHistorySessionController *_sessionController;
    struct { BOOL isUpdating; BOOL filterChanged; BOOL changedExternally; unsigned long long suppressingUpdatesCount; } _updateFlags;
    NSOrderedSet *_unfilteredSessions;
    NSPredicate *_filterPredicate;
    NSObject<OS_dispatch_queue> *_filteringQueue;
    NSTimer *_saveChangesToCloudHistoryTimer;
}

@property (readonly, nonatomic) History *history;
@property (weak, nonatomic) id<SFHistoryViewDataSourceDelegate> delegate;

- (void)dealloc;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (void)filterUsingPredicate:(id)a0;
- (id)initWithHistory:(id)a0;
- (void)historyChanged:(id)a0;
- (id)_browsingSessions;
- (id)_filteredHistorySessionsForPredicate:(id)a0;
- (void)_saveChangesToCloudHistory;
- (void)deleteHistoryItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveChangesToCloudHistorySoon;

@end
