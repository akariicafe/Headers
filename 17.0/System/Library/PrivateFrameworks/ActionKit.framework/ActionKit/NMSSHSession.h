@class NSString, NMSSHChannel, NMSFTP, NSError, NSNumber, NMSSHHostConfig;
@protocol NMSSHSessionDelegate;

@interface NMSSHSession : NSObject

@property (nonatomic) struct _LIBSSH2_AGENT { } *agent;
@property (nonatomic, getter=rawSession) struct _LIBSSH2_SESSION { } *session;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) id /* block */ kbAuthenticationBlock;
@property (retain, nonatomic) NMSSHChannel *channel;
@property (retain, nonatomic) NMSFTP *sftp;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NMSSHHostConfig *hostConfig;
@property (weak, nonatomic) id<NMSSHSessionDelegate> delegate;
@property (retain, nonatomic) NSNumber *timeout;
@property (readonly, nonatomic) NSError *lastError;
@property (nonatomic) long long fingerprintHash;
@property (retain, nonatomic) NSString *banner;
@property (readonly, nonatomic) NSString *remoteBanner;
@property (readonly, nonatomic) struct __CFSocket { } *socket;
@property (readonly, nonatomic, getter=isAuthorized) BOOL authorized;

+ (id)URLForHost:(id)a0;
+ (id)connectToHost:(id)a0 port:(long long)a1 withUsername:(id)a2;
+ (id)connectToHost:(id)a0 withUsername:(id)a1;

- (void)disconnect;
- (BOOL)connect;
- (void).cxx_destruct;
- (id)applicationSupportDirectory;
- (id)hostIPAddresses;
- (BOOL)addKnownHostName:(id)a0 port:(long long)a1 toFile:(id)a2 withSalt:(id)a3;
- (BOOL)authenticateByInMemoryPublicKey:(id)a0 privateKey:(id)a1 andPassword:(id)a2;
- (BOOL)authenticateByKeyboardInteractive;
- (BOOL)authenticateByKeyboardInteractiveUsingBlock:(id /* block */)a0;
- (BOOL)authenticateByPassword:(id)a0;
- (BOOL)authenticateByPublicKey:(id)a0 privateKey:(id)a1 andPassword:(id)a2;
- (BOOL)connectToAgent;
- (BOOL)connectWithTimeout:(id)a0;
- (id)fingerprint:(long long)a0;
- (id)initWithHost:(id)a0 andUsername:(id)a1;
- (id)initWithHost:(id)a0 configs:(id)a1 withDefaultPort:(long long)a2 defaultUsername:(id)a3;
- (id)initWithHost:(id)a0 port:(long long)a1 andUsername:(id)a2;
- (id)keyboardInteractiveRequest:(id)a0;
- (long long)knownHostStatusInFiles:(id)a0;
- (long long)knownHostStatusWithFile:(id)a0;
- (id)supportedAuthenticationMethods;
- (BOOL)supportsAuthenticationMethod:(id)a0;
- (id)userKnownHostsFileName;

@end
