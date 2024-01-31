@class NSString, NSObject;
@protocol OS_os_log, UMSideEffectsProviding;

@interface UMGenerationCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _notifyToken;
    NSString *_name;
    NSString *_notification;
    NSObject<OS_os_log> *_log;
    NSObject<UMSideEffectsProviding> *_se;
    id /* block */ _fetcher;
    unsigned long long _cachedValue;
}

- (void).cxx_destruct;

@end
