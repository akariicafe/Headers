@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SMMessagingServiceMessengerDelegate;

@interface SMMadridMessenger : NSObject <SMMadridMessengerProtocol, SMMadridMessengerProtocolPrivate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *madridMessagesWaitingForAck;
@property (retain, nonatomic) NSMutableArray *resultsWaitingForProcessing;
@property (weak, nonatomic) id<SMMessagingServiceMessengerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)iMessageDeletedFor:(id)a0;
- (void)iMessageReceived:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)iMessageScheduledSendCancelFor:(id)a0 successful:(BOOL)a1 withError:(id)a2;
- (void)iMessageScheduledSendScheduledFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)iMessageScheduledSendTriggeredFor:(id)a0;
- (void)iMessageSendFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)cancelMadridMessageSendForMessageGUID:(id)a0 toHandle:(id)a1 completion:(id /* block */)a2;
- (void)cancelMadridMessageSendForMessageGUID:(id)a0 toHandle:(id)a1 retryCount:(long long)a2 completion:(id /* block */)a3;
- (id)createMSMessage:(id)a0 summaryText:(id)a1;
- (id)getIMPluginPayloadFromMSMessage:(id)a0;
- (void)processSesssionStartMessageSendResultWithMessageUrl:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)scheduleMadridMessageSendForMessage:(id)a0 messageGUID:(id)a1 associatedGUID:(id)a2 sendDate:(id)a3 toHandle:(id)a4 summaryText:(id)a5 completion:(id /* block */)a6;
- (void)sendMadridMessage:(id)a0 associatedGUID:(id)a1 toHandle:(id)a2 summaryText:(id)a3 completion:(id /* block */)a4;

@end
