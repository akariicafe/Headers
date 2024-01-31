@class NSObject;
@protocol OS_xpc_object;

@interface _CFPrefsClientContext : NSObject {
    _Atomic id _cfprefsd;
    struct __CFDictionary { } *_suiteCache;
    struct __CFSet { } *_observedSources;
    NSObject<OS_xpc_object> *_entitlements;
    struct __CFArray { } *_appGroups;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _sandboxed;
    char _isPlatformBinary;
    BOOL _impersonatingAnotherProcess;
    BOOL _hasInFlightKVONotifications;
    BOOL _didDeferKVONotifications;
    BOOL _valid;
}

@end
