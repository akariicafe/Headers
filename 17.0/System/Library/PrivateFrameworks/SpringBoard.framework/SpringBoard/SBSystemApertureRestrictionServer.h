@class BSServiceConnectionListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SBSystemApertureRestrictionServerDelegate;

@interface SBSystemApertureRestrictionServer : NSObject <BSServiceConnectionListenerDelegate, SBSSystemApertureRestrictionServiceServerInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientServiceCollectionLock;
    NSMutableArray *_connections;
    NSMutableArray *_remoteAssertions;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnectionListener *_connectionListener;
    BOOL _isValid;
    id<SBSystemApertureRestrictionServerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(id)a0;
- (id)acquireSystemApertureCompleteSuppressionAssertionIdentifierWithReason:(id)a0;
- (oneway void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(id)a0;
- (oneway void)invalidateSystemApertureCompleteSuppressionAssertionWithIdentifier:(id)a0;

@end
