@class NSSet, NSMutableDictionary, NPSManager, NSObject;
@protocol OS_dispatch_queue;

@interface BLTMuteSync : NSObject {
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSSet *mutedForTodaySectionIdentifiers;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_updateObservers;
- (void)_loadMutedSectionIdentifiers;
- (void)_queue_sync;
- (void)addSectionIdentifiers:(id)a0;
- (BOOL)isMutedForTodaySectionIdentifier:(id)a0;
- (void)removeSectionIdentifiers:(id)a0;
- (void)_cleanMuteIdentifiers;

@end
