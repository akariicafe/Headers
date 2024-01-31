@class NSMutableDictionary;

@interface MusicKit_PlayerPathSessionManager : NSObject {
    NSMutableDictionary *_sessionIDsByPlayerPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) MusicKit_PlayerPathSessionManager *sharedSessionManager;

- (id)init;
- (void).cxx_destruct;
- (id)sessionIDForPlayerPath:(id)a0;

@end
