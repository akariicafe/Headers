@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BLTSettingSyncSendQueue : NSObject {
    NSObject<OS_dispatch_queue> *_sectionInfoSenderQueue;
    NSObject<OS_dispatch_queue> *_sectionInfoProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_sectionInfoSemaphore;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconSenderQueue;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_subsectionParameterIconSemaphore;
}

@property (retain, nonatomic) NSDictionary *iconAllowList;
@property (copy, nonatomic) id /* block */ sectionParametersProvider;
@property (copy, nonatomic) id /* block */ sectionInfoSender;
@property (copy, nonatomic) id /* block */ sectionIconSender;
@property (copy, nonatomic) id /* block */ sectionRemoveSender;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxConcurrentSendCount:(unsigned long long)a0;
- (void)_sendEffectiveSectionInfo:(id)a0 waitForAcknowledgement:(BOOL)a1 withQueue:(id)a2 spoolToFile:(BOOL)a3 andCompletion:(id /* block */)a4;
- (void)_sendSectionIcon:(id)a0 forSectionID:(id)a1 forSubtypeID:(long long)a2 waitForAcknowledgement:(BOOL)a3 withQueue:(id)a4 spoolToFile:(BOOL)a5 andCompletion:(id /* block */)a6;
- (void)_sendSectionInfoWithSectionID:(unsigned long long)a0 usingProvider:(id /* block */)a1 updateProgress:(id /* block */)a2 sendCompleted:(id /* block */)a3 sendAttempt:(unsigned long long)a4 waitForAcknowledgement:(BOOL)a5 group:(id)a6 spoolToFile:(BOOL)a7;
- (void)sendEffectiveSectionInfosUsingProvider:(id /* block */)a0 count:(unsigned long long)a1 sectionInfoSendCompleted:(id /* block */)a2 completion:(id /* block */)a3 progress:(id /* block */)a4 spoolToFile:(BOOL)a5;
- (void)sendRemoveSectionWithSectionID:(id)a0 sent:(id /* block */)a1;
- (void)sendSectionSubtypeParameterIcons:(id)a0 sectionID:(id)a1 waitForAcknowledgement:(BOOL)a2 spoolToFile:(BOOL)a3 completion:(id /* block */)a4;
- (void)sendSpooledRequestsNowWithSender:(id /* block */)a0 completion:(id /* block */)a1 progress:(id /* block */)a2;

@end
