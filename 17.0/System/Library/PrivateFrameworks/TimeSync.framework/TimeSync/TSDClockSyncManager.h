@class NSMutableDictionary;

@interface TSDClockSyncManager : NSObject {
    NSMutableDictionary *_clockSyncs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clockSyncsLock;
}

+ (id)sharedClockSyncManager;

- (id)init;
- (void).cxx_destruct;
- (id)clockSyncForClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (void)releaseClockSyncForClockIdentifier:(unsigned long long)a0;

@end
