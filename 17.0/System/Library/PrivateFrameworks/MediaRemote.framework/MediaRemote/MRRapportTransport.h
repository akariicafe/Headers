@class NSError, NSString, MRAVOutputDevice, RPCompanionLinkDevice, NSObject, MRCompanionLinkClient, MRExternalDeviceTransportConnection, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface MRRapportTransport : MRExternalDeviceTransport {
    NSError *_error;
    NSObject<OS_dispatch_queue> *_workerQueue;
    MRAVOutputDevice *_outputDevice;
    MRAVOutputDevice *_proxyOutputDevice;
    id _resetToken;
    id _disconnectToken;
    MRCompanionLinkClient *_client;
}

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSString *sessionUID;
@property (retain, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (retain, nonatomic) RPCompanionLinkDevice *targetDevice;

+ (void)_writeConnectionRecordsToDisk:(id)a0;
+ (id)_readConnectionRecordsFromDisk;
+ (void)resetPersistedConnections;

- (id)deviceInfo;
- (void)dealloc;
- (id)hostname;
- (id)uid;
- (id)initWithOutputDevice:(id)a0;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (id)name;
- (long long)port;
- (id)error;
- (void)resetWithError:(id)a0;
- (void)_removeConnectionRecordFromDisk;
- (id)_generateSessionUID;
- (void)_persistConnectionRecordToDisk;
- (id)createConnectionWithUserInfo:(id)a0;
- (id)initWithOutputDevice:(id)a0 proxyOutputDevice:(id)a1;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;

@end
