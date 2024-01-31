@class NSArray, NSMutableArray;

@interface WFVoiceShortcutCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *voiceShortcuts;
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)clear;
- (void)setCachedVoiceShortcuts:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)registerForDatabaseNotifications;
- (void)unregisterFromDatabaseNotifications;
- (void)databaseDidChange;
- (void).cxx_destruct;
- (void)getCachedVoiceShortcuts:(id /* block */)a0;

@end
