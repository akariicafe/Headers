@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object;

@interface _XRExpiredPidCache : NSObject {
    NSObject<OS_xpc_object> *pidWatcher;
    int enableCount;
    NSMutableDictionary *signatures;
}

- (void).cxx_destruct;

@end
