@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)extensionWithIdentifier:(id)a0 gotUnknownInterfaceController:(id)a1;
- (void)fetchNotificationForNotificationID:(id)a0 completion:(id /* block */)a1;
- (void)requestTimingData:(id)a0 timingMetaData:(id)a1;
- (void)sendCacheRequest:(id)a0 identifier:(id)a1;
- (void)sendData:(id)a0 identifier:(id)a1 clientIdentifiers:(id)a2;
- (void)sendData:(id)a0 identifier:(id)a1 clientIdentifiers:(id)a2 reply:(id /* block */)a3;

@end
