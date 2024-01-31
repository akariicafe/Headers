@class SHCatalog, NSUUID, SHMatcherRequest, NSString, SHSession, SHManagedSessionCustomCatalogDriver;
@protocol SHSessionDelegate, SHPreparableMatcher;

@interface SHManagedSession : NSObject <SHSessionDelegate_Internal>

@property (readonly, nonatomic) NSUUID *sharedRequestID;
@property (readonly, nonatomic) SHSession *session;
@property (readonly, nonatomic) id<SHPreparableMatcher> shazamServiceConnection;
@property (readonly, nonatomic) SHManagedSessionCustomCatalogDriver *sessionDriver;
@property (retain, nonatomic) SHMatcherRequest *inflightRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) id<SHSessionDelegate> delegate;
@property (nonatomic) BOOL sendNotifications;
@property (nonatomic) BOOL enableLiveActivity;
@property (readonly, nonatomic) SHCatalog *catalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)stopMatchingAmbientAudioSnippet;
- (void)didCalculateSpectralData:(id)a0;
- (void)ensureCallerHasRecordTCCWithCompletionHandler:(id /* block */)a0;
- (void)finishedSession:(id)a0;
- (id)initWithCatalog:(id)a0;
- (id)initWithCatalog:(id)a0 matcher:(id)a1 sessionDriver:(id)a2 serviceConnection:(id)a3;
- (id)initWithPartnerName:(id)a0;
- (BOOL)isUsingCustomCatalog:(id)a0;
- (void)matchAmbientAudioSnippet;
- (void)matchAmbientAudioSnippetUntilDeadline:(id)a0;
- (void)matchWithCallback:(id /* block */)a0;
- (void)prepareMatchWithPreparedCallback:(id /* block */)a0 withCompletionHandler:(id /* block */)a1;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;
- (void)session:(id)a0 didProduceResponse:(id)a1;
- (BOOL)session:(id)a0 shouldAttemptToMatchSignature:(id)a1;
- (void)singleMatchWithCompletionHandler:(id /* block */)a0;

@end
