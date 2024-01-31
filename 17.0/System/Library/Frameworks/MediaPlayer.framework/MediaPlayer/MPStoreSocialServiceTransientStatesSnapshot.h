@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}

- (id)init;
- (void).cxx_destruct;
- (void)_addTransientFollowState:(long long)a0 transientFollowPendingRequestState:(long long)a1 forPerson:(id)a2;
- (long long)transientFollowPendingRequestStateForPerson:(id)a0;
- (long long)transientFollowStateForPerson:(id)a0;

@end
