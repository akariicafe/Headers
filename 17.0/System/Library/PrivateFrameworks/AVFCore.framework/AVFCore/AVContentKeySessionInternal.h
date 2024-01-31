@class NSHashTable, AVWeakReference, NSURL, NSData, NSString, NSMutableDictionary, NSObject, NSMutableArray, AVWeakReferencingDelegateStorage, NSMapTable, AVContentKeyReportGroup;
@protocol OS_dispatch_queue;

@interface AVContentKeySessionInternal : NSObject {
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReference *_weakReference;
    NSURL *_storageURL;
    NSData *_appIdentifier;
    BOOL _isExpired;
    BOOL _internal;
    AVContentKeyReportGroup *_defaultContentKeyGroup;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_contentKeyRecipients;
    NSString *_keySystem;
    NSMutableDictionary *keyRequestsByRequestID;
    NSMutableArray *_contentKeyGroups;
    NSMapTable *cryptorUUIDToContentKeyRequestMap;
    NSMutableDictionary *keyRequestParamsByRequestID;
    NSMutableDictionary *keyRequestTrackerByRequestID;
    NSMutableDictionary *cryptorsByIdentifer;
    NSMapTable *contentKeyRequestByKeySpecifierMap;
    NSData *_protectorSessionIdentifier;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct CMBaseObject { } *_contentKeyBoss;
    BOOL _useContentKeyBoss;
}

@end
