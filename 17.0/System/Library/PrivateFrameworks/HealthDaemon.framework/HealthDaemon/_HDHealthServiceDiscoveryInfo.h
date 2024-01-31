@class CBUUID, NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface _HDHealthServiceDiscoveryInfo : NSObject {
    NSMutableSet *_peripheralsUUIDs;
    BOOL _alwaysNotify;
    BOOL _requiresActiveScan;
    unsigned long long _discoveryIdentifier;
    id /* block */ _discoveryHandler;
    CBUUID *_serviceUUID;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

- (void).cxx_destruct;

@end
