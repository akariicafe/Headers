@class NSString, NSXPCConnection, NSMutableDictionary, NSDictionary, NSLock;
@protocol ACCConnectionInfoConfigStreamDelegateProtocol, ACCConnectionInfoXPCServerProtocol, ACCConnectionInfoPrivateDelegateProtocol;

@interface ACCConnectionInfo : NSObject

@property (retain, nonatomic) NSString *providerUID;
@property (weak, nonatomic) id<ACCConnectionInfoPrivateDelegateProtocol> delegate;
@property (weak, nonatomic) id<ACCConnectionInfoConfigStreamDelegateProtocol> configStreamDelegate;
@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) NSLock *serverConnectionLock;
@property (retain, nonatomic) id<ACCConnectionInfoXPCServerProtocol> remoteObject;
@property (retain, nonatomic) NSLock *listLock;
@property (retain, nonatomic) NSMutableDictionary *connectionList;
@property (retain, nonatomic) NSMutableDictionary *endpointList;
@property (copy, nonatomic) id /* block */ configStreamGetResponseHandler;
@property (readonly) NSDictionary *accessoryFilterDictionary;

+ (id)sharedInstance;
+ (id)accessoryDictionaryForLogging:(id)a0;
+ (id)copyLocalizedAccessoryName:(id)a0;

- (void)connectToServer;
- (void)getPairingStatus:(id)a0 withReply:(id /* block */)a1;
- (BOOL)registerDelegate:(id)a0;
- (id)init;
- (void)notifyDelegateOfServerDisconnectAndCleanup;
- (void)configStreamCategoriesResponse:(id)a0 forEndpoint:(id)a1 connection:(id)a2 success:(BOOL)a3;
- (void)dealloc;
- (void)configStreamPropertyResponse:(unsigned char)a0 forCategory:(unsigned short)a1 forEndpoint:(id)a2 connection:(id)a3 value:(id)a4 success:(BOOL)a5;
- (void)beginUserKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryConnectionAttached:(id)a0 type:(int)a1 info:(id)a2 properties:(id)a3;
- (void)accessoryConnectionInfoPropertyChanged:(id)a0 properties:(id)a1;
- (void)getPrivateNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)beginVendorKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryInfoForEndpoint:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (void)sendData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (id)accessoryPropertySync:(id)a0 forConnection:(id)a1;
- (BOOL)configStreamCategoriesRequest:(id)a0 connection:(id)a1 withReply:(id /* block */)a2;
- (int)getInterceptCountForEndpoint:(id)a0 connection:(id)a1;
- (void)copyUserPrivateKey:(id)a0 withReply:(id /* block */)a1;
- (void)configStreamCategoryListReady:(id)a0 connection:(id)a1;
- (void)provisionAccessoryForFindMy:(id)a0 withReply:(id /* block */)a1;
- (void)resetPairingInformation:(id)a0 withReply:(id /* block */)a1;
- (void)setPublicNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (BOOL)configStreamPropertyRequest:(unsigned char)a0 forCategory:(unsigned short)a1 forEndpoint:(id)a2 connection:(id)a3 withReply:(id /* block */)a4;
- (void)getPublicNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)cancelVendorKeyErase:(id)a0 withReply:(id /* block */)a1;
- (void)cancelUserKeyErase:(id)a0 withReply:(id /* block */)a1;
- (id)accessoryPropertySync:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (int)accessoryConnectionType:(id)a0;
- (void)continueUserKeyErase:(id)a0 withSignature:(id)a1 andAccessoryNonce:(id)a2 forEndpoint:(id)a3 withReply:(id /* block */)a4;
- (void)handleInterceptData:(id)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)getAccessoryUserName:(id)a0 withReply:(id /* block */)a1;
- (void)accessoryEndpointUpdate:(id)a0 protocol:(int)a1 properties:(id)a2 forConnection:(id)a3;
- (void)setPrivateNVMKeyValues:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void)setAccessoryUserName:(id)a0 forEndpoint:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 properties:(id)a3 forConnection:(id)a4;
- (void)accessoryProperty:(id)a0 forConnection:(id)a1 withReply:(id /* block */)a2;
- (void)accessoryEndpointDetached:(id)a0 forConnection:(id)a1;
- (int)accessoryEndpointProtocolType:(id)a0 connection:(id)a1;
- (void)configStreamPropertySetValue:(id)a0 forProperty:(unsigned char)a1 forCategory:(unsigned short)a2 forEndpoint:(id)a3 connection:(id)a4;
- (void)accessoryInfoForConnection:(id)a0 withReply:(id /* block */)a1;
- (id)accessoryInfoForConnectionSync:(id)a0;
- (id)accessoryInfoForEndpointSync:(id)a0 connection:(id)a1;
- (BOOL)registerDelegate:(id)a0 withFilter:(id)a1;
- (id)copyLocalizedAccessoryNameFromDaemon:(id)a0;
- (void)continueVendorKeyErase:(id)a0 withSignature:(id)a1 andAccessoryNonce:(id)a2 forEndpoint:(id)a3 withReply:(id /* block */)a4;
- (void)accessoryEndpointInfoPropertyChanged:(id)a0 properties:(id)a1 forConnection:(id)a2;
- (void)accessoryProperty:(id)a0 forEndpoint:(id)a1 connection:(id)a2 withReply:(id /* block */)a3;
- (int)accessoryEndpointTransportType:(id)a0 connection:(id)a1;
- (void)interceptIncomingNTimes:(int)a0 forEndpoint:(id)a1 connection:(id)a2;
- (void)accessoryEndpointsForConnection:(id)a0 withReply:(id /* block */)a1;

@end
