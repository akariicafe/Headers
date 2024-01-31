@class PBItemCollection, NSArray, NSString, _UIDataTransferMonitor;
@protocol _DUIDragContinuation, _UISceneOpenItemProvidersDataTransferSessionDelegate;

@interface _UISceneOpenItemProvidersDataTransferSession : NSObject <_UIDataTransferMonitorDelegate>

@property (retain, nonatomic) _UIDataTransferMonitor *monitor;
@property (retain, nonatomic) NSArray *itemProviders;
@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (retain, nonatomic) id<_DUIDragContinuation> continuation;
@property (weak, nonatomic) id<_UISceneOpenItemProvidersDataTransferSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dataTransferMonitorBeganTransfers:(id)a0;
- (void)dataTransferMonitorFinishedTransfers:(id)a0;
- (void)didFinishSendingRequests;
- (id)initWithItemProviders:(id)a0 itemCollection:(id)a1 continuation:(id)a2;

@end
