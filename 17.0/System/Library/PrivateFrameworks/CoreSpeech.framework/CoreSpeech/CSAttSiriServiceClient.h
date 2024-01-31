@class CSAttSiriCameraHandler, NSString, NSXPCConnection;
@protocol CSAttSiriServiceDelegate;

@interface CSAttSiriServiceClient : NSObject <CSAttSiriServiceDelegate, CSAttSiriServiceProtocol>

@property (retain, nonatomic) NSXPCConnection *attSiriSvcConn;
@property (retain, nonatomic) id remoteSvcProxy;
@property (retain, nonatomic) CSAttSiriCameraHandler *cameraHandler;
@property (weak, nonatomic) id<CSAttSiriServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_setupAttSiriSvcXpcConnection;
- (void)attSiriAttendingFailed;
- (void)attSiriAttendingTimeoutTriggered;
- (void)attSiriDidDetectAttendingTrigger:(id)a0;
- (void)attSiriDidDetectContinuousConversation;
- (void)attSiriDidStartAttending:(BOOL)a0 useLegacyModel:(BOOL)a1;
- (void)gazeEstimates:(struct CGPoint { double x0; double x1; })a0 landmarks:(id)a1;
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)a0 atMachAbsTime:(unsigned long long)a1;
- (void)siriRequestProcessingCompleted;
- (void)startAttendingWithContext:(id)a0;
- (void)stopAttendingWithContext:(id)a0;
- (void)updateSiriOrbLocation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
