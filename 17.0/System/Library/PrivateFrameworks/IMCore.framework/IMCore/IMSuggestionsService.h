@class NSMutableDictionary, NSDictionary, NSHashTable, NSObject, NSCache;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol;

@interface IMSuggestionsService : NSObject {
    NSObject<SGSuggestionsServiceContactsProtocol> *_connection;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pending;
    NSDictionary *_localTable;
    NSHashTable *_handlesToRetry;
    id _newContactNotificationToken;
    struct __CFRunLoopObserver { } *_notificationObserver;
}

+ (id)sharedInstance;

- (id)init;
- (id)serviceConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (id)fetchCNContactForSuggestedHandle:(id)a0;
- (id)_contactForSGContactMatch:(id)a0;
- (BOOL)_maybeEmailAddress:(id)a0;
- (BOOL)_maybePhoneNumber:(id)a0;
- (void)_startRequestForDisplayName:(id)a0 messageUID:(id)a1 queue:(id)a2;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)a0 displayName:(id)a1 queue:(id)a2;
- (void)fetchSuggestedRealNameForDisplayName:(id)a0 messageUID:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (BOOL)isBusiness:(id)a0;
- (id)personNameComponentsForHandle:(id)a0;
- (void)scheduleFetchIfNecessaryForHandle:(id)a0;
- (void)startUsingLocalLookupsWithTable:(id)a0;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:(id)a0 wasFound:(BOOL *)a1;

@end
