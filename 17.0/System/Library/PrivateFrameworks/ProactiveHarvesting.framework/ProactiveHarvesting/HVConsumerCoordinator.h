@class NSString, HVQueues, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface HVConsumerCoordinator : NSObject <HVQueueObserver> {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HVQueues *_queues;
    NSString *_path;
    NSObject<OS_dispatch_group> *_waitingForLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCoordinator;

- (id)init;
- (BOOL)registerRemindersConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerParsecConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void)enableConsumptionOfDataSources:(unsigned int)a0;
- (void)restoreConsumptionOfDataSources:(unsigned int)a0;
- (BOOL)registerSafariConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (id)initWithQueues:(id)a0 path:(id)a1;
- (BOOL)registerMailConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerInteractionConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerNotesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)statsWithError:(id *)a0;
- (BOOL)registerMessagesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerSiriConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerPhotosConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)harvestContentWithMinimumLevelOfService:(unsigned char)a0 ignoringDiscretionaryPowerBudget:(BOOL)a1 error:(id *)a2 shouldContinueBlock:(id /* block */)a3;
- (void)disableConsumptionOfDataSources:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)registerUserActivityConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void)contentAvailableFromSources:(unsigned int)a0;
- (BOOL)registerNewsConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (BOOL)registerThirdPartyAppConsumer:(id)a0 levelOfService:(unsigned char)a1;

@end
