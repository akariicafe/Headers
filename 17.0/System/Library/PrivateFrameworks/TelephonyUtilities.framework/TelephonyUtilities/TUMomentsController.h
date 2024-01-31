@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, TUMomentsControllerDataSource, TUMomentsControllerDelegate;

@interface TUMomentsController : NSObject <TUMomentsControllerDataSourceDelegate>

@property (class, readonly, nonatomic, getter=isFaceTimePhotosEnabledByDefault) BOOL faceTimePhotosEnabledByDefault;
@property (class, copy, nonatomic) id /* block */ faceTimePhotosEnabledDeterminer;
@property (class, nonatomic, getter=isFaceTimePhotosEnabled) BOOL faceTimePhotosEnabled;
@property (class, readonly, nonatomic, getter=isFaceTimePhotosRestricted) BOOL faceTimePhotosRestricted;
@property (class, readonly, nonatomic, getter=isFaceTimePhotosXPCServiceEnabled) BOOL faceTimePhotosXPCServiceEnabled;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUMomentsControllerDataSource> dataSource;
@property (readonly, weak, nonatomic) id<TUMomentsControllerDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *capabilitiesByVideoStreamToken;
@property (readonly, nonatomic) NSMutableDictionary *providerByVideoStreamToken;
@property (copy, nonatomic) id /* block */ lockdownModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalInstall;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)capabilitiesForProvider:(id)a0;
- (void)dataSource:(id)a0 didFinishProcessingRawVideoMessage:(id)a1;
- (void)dataSource:(id)a0 didReceiveLocallyRequestedMomentDescriptor:(id)a1;
- (void)dataSource:(id)a0 didReceiveMessageRecordingError:(id)a1;
- (void)dataSource:(id)a0 didUpdateCapabilities:(id)a1 forVideoStreamToken:(long long)a2;
- (void)dataSource:(id)a0 requestSandboxExtensionForURL:(id)a1 reply:(id /* block */)a2;
- (void)dataSource:(id)a0 willCaptureRemoteRequestFromRequesterID:(id)a1;
- (void)discardVideoMessageWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)endRecordingMessageWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)endRequestWithTransactionID:(id)a0 completion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (void)prewarmAudioClientWithCompletion:(id /* block */)a0;
- (void)registerProvider:(id)a0 completion:(id /* block */)a1;
- (void)resetVideoMessagingWithSessionUUID:(id)a0 completion:(id /* block */)a1;
- (void)saveVideoMessageWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)sendVideoMessageWithUUID:(id)a0 callUUID:(id)a1 toHandles:(id)a2 completion:(id /* block */)a3;
- (void)serverDiedForDataSource:(id)a0;
- (void)startRecordingMessageWithMediaType:(int)a0 completion:(id /* block */)a1;
- (void)startRequestWithMediaType:(int)a0 forProvider:(id)a1 requesteeID:(id)a2 completion:(id /* block */)a3;
- (void)unregisterProvider:(id)a0 completion:(id /* block */)a1;

@end
