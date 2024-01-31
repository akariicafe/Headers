@class NSString, SBAccessoryConnectionInfoProvider;
@protocol SBAmbientChargerConnectionInfoProviderDelegate;

@interface SBAmbientChargerConnectionInfoProvider : NSObject <SBAccessoryConnectionInfoProviderObserver> {
    SBAccessoryConnectionInfoProvider *_accessoryConnectionInfoProvider;
    NSString *_connectedChargerConnectionUUID;
}

@property (copy, nonatomic, setter=_setCurrentConnectedChargerId:) NSString *currentConnectedChargerId;
@property (weak, nonatomic) id<SBAmbientChargerConnectionInfoProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isChargerConnected) BOOL chargerConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)accessoryConnectionInfoProvider:(id)a0 accessoryEndpointDetached:(id)a1 forConnection:(id)a2;
- (void).cxx_destruct;
- (void)accessoryConnectionInfoProvider:(id)a0 accessoryEndpointAttached:(id)a1 transportType:(int)a2 protocol:(int)a3 properties:(id)a4 forConnection:(id)a5;
- (id)initWithDelegate:(id)a0;

@end
