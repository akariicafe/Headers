@class VideoAttributes, NSString, VCMediaRecorderHistory, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaRecorder : VCObject <VCMediaRecorderProtocol> {
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMediaRecorderHistory *_mediaRecorderHistory;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    BOOL _isClientRegistered;
    NSMutableSet *_requests;
    BOOL _lastRequest;
    unsigned int _currentTimestamp;
    double _lastHealthPrintCallAbsoluteSeconds;
    unsigned long long _localVideoCallbacksCount;
    unsigned long long _localVideoCallbacksClearedCount;
    unsigned long long _localAudioCallbacksCount;
    unsigned long long _localAudioCallbacksClearedCount;
    unsigned long long _remoteAudioCallbacksCount;
    unsigned long long _remoteAudioCallbacksClearedCount;
    unsigned long long _bufferResets;
}

@property (nonatomic) unsigned int capabilities;
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) VideoAttributes *targetScreenAttributes;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)typeForRequest:(id)a0;
+ (unsigned long long)countForRequestType:(int)a0;
+ (unsigned long long)deviceFreeDiskSpace;
+ (BOOL)deviceHasSufficientFreeSpace;
+ (id)stringFromMediaType:(unsigned char)a0;

- (void)dealloc;
- (void)invalidate;
- (void)setFrameRate:(float)a0;
- (void)processRequest:(id)a0;
- (unsigned long long)directorySize:(id)a0;
- (void)setTransportDelegate:(id)a0;
- (void)_generateRequest:(unsigned char)a0 requestState:(unsigned char)a1 transactionID:(id)a2 timestamp:(unsigned int)a3;
- (void)cleanupActiveRequests;
- (void)deregisterClient;
- (void)getInitialRemoteScreenAttributes:(id)a0;
- (void)handleInsufficientFreeSpaceWithRequest:(id)a0 delegate:(id)a1;
- (id)initWithStreamToken:(unsigned int)a0 delegate:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2;
- (BOOL)isHistorySupported;
- (id)mediaRecorderDelegate;
- (void)notifyFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (void)notifyLocalFinishWithRequest:(id)a0 didSucceed:(BOOL)a1;
- (void)notifyRemoteFinishWithRequest:(id)a0 didSucceed:(BOOL)a1 fileSize:(long long)a2;
- (BOOL)processClientRequest:(id)a0 error:(id *)a1;
- (void)processRemoteLivePhotoRequest:(id)a0;
- (void)processRemotePhotoRequest:(id)a0;
- (void)processRemoteRequest:(id)a0 withMediaType:(unsigned char)a1;
- (void)registerClient;
- (void)reportingMediaRecorderWithRequest:(id)a0 fileLength:(double)a1 fileSize:(unsigned long long)a2;
- (void)setMediaRecorderDelegate:(id)a0;
- (void)setUpReportingAgent;
- (id)transportDelegate;
- (void)updateActiveStatus;
- (BOOL)validateIncomingRequest:(id)a0;
- (void)validateNonzeroAudioRecordingLengthURL:(id)a0 error:(id *)a1;
- (BOOL)validateNumberOfRequestsWithError:(id *)a0;

@end
