@class DYCaptureState, DYTransport, NSString, DYCaptureDescriptor, NSMutableDictionary, NSObject, DYCaptureArchive, DYTransportSource;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DYGuestAppClient : NSObject <DYCaptureManager> {
    DYTransport *_transport;
    DYTransportSource *_source;
    NSObject<OS_dispatch_queue> *_stopCaptureQueue;
    unsigned long long _lastSessionSerial;
}

@property (nonatomic) int traceMode;
@property (nonatomic) int previousTraceMode;
@property (readonly, nonatomic) struct Stream { struct VMBuffer *x0; union { void *x0; struct *x1; } x1; void *x2; unsigned long long x3; struct __CFString *x4; id /* block */ x5; id /* block */ x6; int x7; BOOL x8; } *defaultFbufStream;
@property (readonly, nonatomic) struct Stream { struct VMBuffer *x0; union { void *x0; struct *x1; } x1; void *x2; unsigned long long x3; struct __CFString *x4; id /* block */ x5; id /* block */ x6; int x7; BOOL x8; } *startup0Stream;
@property (readonly, nonatomic) struct Stream { struct VMBuffer *x0; union { void *x0; struct *x1; } x1; void *x2; unsigned long long x3; struct __CFString *x4; id /* block */ x5; id /* block */ x6; int x7; BOOL x8; } *startup1Stream;
@property (readonly) unsigned int globalFrameCounter;
@property BOOL boundaryLessCaptureMode;
@property unsigned int overrideFlags;
@property unsigned long long xcodeOverrideFlags;
@property double xcodeOverrideScaleTessFactor;
@property (readonly, nonatomic) NSMutableDictionary *saveptrPtrInfoDict;
@property (readonly, nonatomic) NSMutableDictionary *ptrUrlInfoDict;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSyncQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *saveptrQueue;
@property (readonly, nonatomic) int waitOnGraphicsSemaphoreAssertions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *graphicsLockWaitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *graphicsSemaphore;
@property (nonatomic) BOOL liveDebugging;
@property (readonly, nonatomic) NSMutableDictionary *liveDebuggingCaptureData;
@property (readonly) unsigned long long state;
@property (readonly, nonatomic) DYCaptureDescriptor *activeCaptureDescriptor;
@property (readonly, nonatomic) DYCaptureState *activeCaptureState;
@property (readonly, nonatomic) DYCaptureArchive *localActiveArchive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timebaseDictionary;

- (id)init;
- (void)dealloc;
- (void)stopCapture;
- (void)processMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (id)initWithTransport:(id)a0;
- (void)_startCapture;
- (void)sendCaptureData:(id)a0 name:(id)a1 inReplyTo:(id)a2;
- (void)_appendLinkTimeLibrariesToVersionsDictionary:(id)a0;
- (void)_appendLinkTimeLibrary:(const char *)a0 toVersionsDictionary:(id)a1;
- (void)_appendToAllCaptureDataSentMessagePayload:(id)a0;
- (void)_armCapture;
- (void)_armCaptureWithTransportMessage:(id)a0;
- (id)_buildLibraryLinkTimeVersionsDictionary;
- (id)_buildQueueThreadLabelsDictionary;
- (BOOL)_canTriggerCaptureOnNextGraphicsCommand;
- (void)_handleActivateCaptureMessage:(id)a0;
- (void)_handleCaptureStreamCreated;
- (void)_handleFrameEnd:(unsigned long long)a0;
- (void)_handleTurnOffCapture;
- (void)_handleTurnOnCapture;
- (void)_populateQueueAndThreadLabelMaps;
- (void)_resetBufferUsageCounters;
- (void)_sendBufferUsageCounters;
- (void)_turnOffCapturing;
- (void)_turnOnCapturing;
- (void)_waitForGraphicsThreads;
- (BOOL)armCaptureWithDescriptor:(id)a0;
- (void)atexit;
- (void)handleCaptureModeTransition:(BOOL)a0;
- (void)handleFrameBoundaryCommon;
- (void)incrementCapturedFramesCounter;
- (unsigned int)incrementGlobalFrameCounter;
- (void)invalidateCapture;
- (void)invalidateSavePointerMap:(id)a0;
- (void)lockGraphicsAndWaitForThreads:(BOOL)a0;
- (void)notifyAllCaptureDataSent;
- (void)notifyAllCaptureMetadataSent;
- (void)notifyUsedDataSentWithDictionary:(id)a0;
- (void)resetPointerToUrlAssociation:(const void *)a0;
- (void)sendMessage:(id)a0 inReplyTo:(id)a1;
- (void)sendTimebaseUpdate;
- (BOOL)startCaptureWithDescriptor:(id)a0;
- (BOOL)triggerArmedCapture;
- (void)unlockGraphics;

@end
