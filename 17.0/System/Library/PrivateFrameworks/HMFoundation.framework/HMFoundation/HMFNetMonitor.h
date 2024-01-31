@class NSString, HMFNetAddress;
@protocol HMFNetMonitorDelegate;

@interface HMFNetMonitor : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _reachable;
}

@property (getter=isReachable) BOOL reachable;
@property (weak) id<HMFNetMonitorDelegate> delegate;
@property (readonly, copy, nonatomic) HMFNetAddress *netAddress;
@property (readonly) unsigned long long reachabilityPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
