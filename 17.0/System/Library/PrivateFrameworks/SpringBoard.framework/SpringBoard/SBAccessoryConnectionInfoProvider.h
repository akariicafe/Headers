@class NSString, ACCConnectionInfo, NSHashTable;

@interface SBAccessoryConnectionInfoProvider : NSObject <ACCConnectionInfoDelegateProtocol> {
    ACCConnectionInfo *_connectionInfo;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)accessoryInfoForEndpoint:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (int)accessoryConnectionType:(id)a0;
- (void).cxx_destruct;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (void)accessoryEndpointInfoPropertyChanged:(id)a0 properties:(id)a1 forConnection:(id)a2;
- (void)addObserver:(id)a0;
- (int)accessoryEndpointTransportType:(id)a0 connection:(id)a1;

@end
