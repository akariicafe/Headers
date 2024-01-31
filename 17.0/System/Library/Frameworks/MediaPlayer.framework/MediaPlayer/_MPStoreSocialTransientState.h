@class NSObject, MPStoreSocialRequestOperation, MPModelSocialPerson;
@protocol OS_dispatch_queue;

@interface _MPStoreSocialTransientState : NSObject {
    long long _followState;
    long long _followPendingRequestState;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPStoreSocialRequestOperation *_latestFollowOperation;
    MPStoreSocialRequestOperation *_latestFollowPendingRequestOperation;
}

@property (readonly, nonatomic) MPModelSocialPerson *person;
@property (readonly, nonatomic) long long followState;
@property (readonly, nonatomic) long long followPendingRequestState;
@property (copy, nonatomic) id /* block */ completionBlock;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0;
- (void)_endIfNeeded;
- (id)newOperationForTransientFollowPendingRequestState:(long long)a0 completion:(id /* block */)a1;
- (id)newOperationForTransientFollowState:(long long)a0 completion:(id /* block */)a1;

@end
