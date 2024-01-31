@class NSMapTable, SUUIMediaPlayerItemStatus, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SUUIMediaPlayerInterface : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSHashTable *_observers;
    SUUIMediaPlayerItemStatus *_onDeckItem;
    NSMapTable *_players;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)sharedInstance;
+ (BOOL)identifierMatches:(id)a0 item:(id)a1;
+ (BOOL)isRadioItemIdentifier:(id)a0;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_onDeckTimedOut;
- (void)_bufferingStateChangedNotification:(id)a0;
- (void)_cancelOnDeckItem;
- (void)_createPeriodicTimeObserverIfNeeded:(id)a0;
- (void)_currentItemDurationAvailableNotification:(id)a0;
- (void)_destroyPeridicTimeObseverIfNeeded:(id)a0;
- (void)_itemDidChange:(id)a0 incomingItem:(id)a1;
- (id)_itemFromNotification:(id)a0;
- (void)_notifiyObserversOfItemChange:(id)a0;
- (void)_notifyFinishedItem:(id)a0;
- (void)_notifyObserversOfItemStateChange;
- (void)_playbackErrorNotification:(id)a0;
- (id)_playerForNotification:(id)a0;
- (void)_playerItemDidChangeNotification:(id)a0;
- (void)_playerItemReady:(id)a0;
- (void)_playerItemWillChangeNotification:(id)a0;
- (void)_playerRateDidChangeNotification:(id)a0;
- (void)_registerForNotificationsForCurrentItem:(id)a0;
- (void)_setCurrentTimeIfPossible:(double)a0 player:(id)a1;
- (void)_startOnDeckTimer;
- (void)_unregisterForNotificationsForCurrentItem:(id)a0;
- (void)_updateBufferingState:(unsigned long long)a0 player:(id)a1;
- (void)_updateDurationForPlayerItem:(id)a0 withMPAVItem:(id)a1;
- (void)_updateItemForPlayer:(id)a0 currentTime:(double)a1;
- (void)_updateTimeValuesUsingItemTime:(BOOL)a0 player:(id)a1 item:(id)a2;
- (BOOL)identifierIsOnDeck:(id)a0;
- (BOOL)isItemWithIdentifierActive:(id)a0;
- (void)notifyWillChangeToItemWithItemIdentifer:(id)a0;
- (id)playerForItemWithIdentifier:(id)a0;
- (void)togglePlayStateForItemWithIdentifier:(id)a0;

@end
