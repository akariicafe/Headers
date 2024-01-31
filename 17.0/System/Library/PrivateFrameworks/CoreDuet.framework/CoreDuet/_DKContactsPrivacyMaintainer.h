@class _CDSpotlightItemRecorder, NSUserDefaults, _PASSimpleCoalescingTimer;
@protocol NSObject, _DKKnowledgeQuerying;

@interface _DKContactsPrivacyMaintainer : NSObject {
    id<_DKKnowledgeQuerying> _knowledgeStore;
    _CDSpotlightItemRecorder *_spotlightRecorder;
    NSUserDefaults *_userDefaults;
    int _notifyToken;
    id<NSObject> _notificationCenterToken;
    _PASSimpleCoalescingTimer *_coalescingContactChangeTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_deleteIntentsRelatedToContactIdentifiers:(id)a0;
- (void)_unregisterContactDeletionNotifications;
- (void)cleanupPendingDeletedContacts;
- (void)handleContactDeletionNotification;
- (void)handleRecentlyDeletedContactsWithLimit:(unsigned long long)a0;
- (id)initWithKnowledgeStore:(id)a0 spotlightRecorder:(id)a1;
- (void)registerContactDeletionNotifications;
- (void)scheduleIntentsPruningXPCActivity;

@end
