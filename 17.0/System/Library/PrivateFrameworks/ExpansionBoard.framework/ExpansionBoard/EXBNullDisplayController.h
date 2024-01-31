@class NSString, NSMutableDictionary;

@interface EXBNullDisplayController : NSObject <EXBDisplayControlling> {
    NSMutableDictionary *_connectedDisplays;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayTransformUpdater:(id)a2 caDisplayQueue:(id)a3 assertion:(id)a4;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0 previousDeactivationReasons:(unsigned long long)a1;
- (id)displayConfigurationForIdentity:(id)a0;
- (BOOL)isConnectedToDisplay:(id)a0;
- (void)transformDisplayConfigurationWithBuilder:(id)a0;

@end
