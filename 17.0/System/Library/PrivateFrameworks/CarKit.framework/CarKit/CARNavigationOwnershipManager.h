@class NSString, NSXPCConnection;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL ownershipRequested;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<CARNavigationOwnershipManagerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long owner;
@property (readonly, nonatomic) NSString *lastNavigatingBundleIdentifier;
@property (nonatomic) BOOL supportsAccNav;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestNavigationOwnership;
- (void)navigationOwnershipChangedTo:(unsigned long long)a0;
- (void)invalidate;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void).cxx_destruct;
- (void)releaseNavigationOwnership;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;

@end
