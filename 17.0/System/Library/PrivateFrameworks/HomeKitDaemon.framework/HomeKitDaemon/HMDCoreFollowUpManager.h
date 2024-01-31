@class NSArray, NSString, NSOperationQueue, NSObject;
@protocol HMDCoreFollowUpManagerDataSource, OS_dispatch_queue;

@interface HMDCoreFollowUpManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSArray *allPossibleFollowUpItemIdentifiers;

@property (readonly) id<HMDCoreFollowUpManagerDataSource> dataSource;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSOperationQueue *followUpOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)_stopAdvertising:(long long)a0;
- (void)startAdvertising:(long long)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)stopAdvertising:(long long)a0;
- (void)_startAdvertising:(long long)a0;
- (void)removeAllFollowUpItemsWithCompletion:(id /* block */)a0;

@end
