@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface GEOConfigStorageDirectReadWrite : GEOConfigStorageDirectReadOnly <GEOConfigStorageReadWrite> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    id _writeTransaction;
    NSObject<OS_dispatch_source> *_writeTimer;
    NSMutableSet *_changedKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
