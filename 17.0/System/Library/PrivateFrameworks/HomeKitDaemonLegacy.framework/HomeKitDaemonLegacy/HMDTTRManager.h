@class NSUUID, NSString, HMDUIDialogPresenter, NSObject;
@protocol OS_dispatch_queue, HMDTTRDataStoring;

@interface HMDTTRManager : NSObject <HMFMessageReceiver, HMDRadarInitiating>

@property (readonly, nonatomic) HMDUIDialogPresenter *dialog;
@property (readonly, nonatomic) id<HMDTTRDataStoring> dataStore;
@property (readonly, nonatomic) id /* block */ dateFactory;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queue;
+ (id)defaultManager;
+ (id)namespaceUUID;

- (id)init;
- (void).cxx_destruct;
- (id)messageDestination;
- (void)handlePresentTTRDialog:(id)a0;
- (void)handleResetLastTTRTime:(id)a0;
- (id)initWithDialog:(id)a0 dataStore:(id)a1 dateFactory:(id /* block */)a2;
- (void)initiateRadarWithTitle:(id)a0 componentName:(id)a1 componentVersion:(id)a2 componentID:(id)a3;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1;
- (void)requestRadarWithMessage:(id)a0 radarTitle:(id)a1 componentName:(id)a2 componentVersion:(id)a3 componentID:(id)a4;
- (void)resetLastTTRTime;

@end
