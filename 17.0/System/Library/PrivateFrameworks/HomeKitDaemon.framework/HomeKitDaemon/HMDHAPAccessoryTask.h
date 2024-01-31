@class NSArray, NSMapTable, HMDHAPAccessoryTaskContext, NSDate, NSNumber, NSString;

@interface HMDHAPAccessoryTask : NSObject <HMDHAPAccessoryTask>

@property (readonly) HMDHAPAccessoryTaskContext *context;
@property (readonly) NSArray *requests;
@property (readonly) NSArray *characteristicResponses;
@property (readonly) NSMapTable *requestToResponseMap;
@property (readonly) id /* block */ completion;
@property (readonly) unsigned long long completedRequestsCount;
@property (retain) NSDate *executionTime;
@property (readonly) NSNumber *identifier;
@property (readonly) double executionTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)sourceType;
- (void)execute;
- (id)workQueue;
- (id)operationName;
- (id)activity;
- (void).cxx_destruct;
- (id)requestIdentifier;
- (id /* block */)_updatedCompletion:(id /* block */)a0;
- (void)addCharacteristicResponses:(id)a0;
- (BOOL)allResponsesReceived;
- (void)finishTaskWithCharacteristicResponses:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;
- (id)logEventsFromAccessoryRequestMap:(id)a0 accessoryList:(id)a1;
- (void)sendCharacteristicNotificationsForCompletedTask:(id)a0 completion:(id /* block */)a1;
- (void)sendCharacteristicNotificationsForTaskInProgress:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsMultiPartResponse;

@end
