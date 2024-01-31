@class NSString, FBSDisplayIdentity, BSAtomicSignal;

@interface _SBDisplayIdentityRecord : NSObject <BSInvalidatable, BSDescriptionStreamable> {
    BSAtomicSignal *_invalidationSignal;
}

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=didConnectAtInit) BOOL connectedAtInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 connectedAtInit:(BOOL)a1;

@end
