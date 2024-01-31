@class BLSAssertionIdentifier, BLSAssertionDescriptor, NSString;
@protocol BLSXPCAssertionServiceClientInterface;

@interface BLSHAssertionProxy : NSObject <BLSAssertionServiceResponding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _valid;
}

@property (retain, nonatomic) BLSAssertionIdentifier *identifier;
@property (readonly, nonatomic) BLSAssertionDescriptor *descriptor;
@property (readonly, nonatomic) id<BLSXPCAssertionServiceClientInterface> remoteTarget;
@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) unsigned long long acquisitionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)serviceDidPause;
- (oneway void)serviceDidAcquire;
- (oneway void)serviceDidCancelWithError:(id)a0;
- (oneway void)serviceDidResume;
- (oneway void)serviceFailedToAcquireWithError:(id)a0;
- (oneway void)serviceWillCancel;
- (id)initWithIdentifier:(id)a0 descriptor:(id)a1 remoteTarget:(id)a2;

@end
