@class GDEntityResolutionRequest, NSArray, NSError, GDEntityResolutionResult;

@interface GDEntityResolutionTextClientInner : NSObject {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ feedbackService;
}

- (id)init;
- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (BOOL)cooldownSyncAndReturnError:(id *)a0;
- (void)cooldownWithCompletionHandler:(void (^)(NSError *))a0;
- (id)initFor:(long long)a0 warmup:(BOOL)a1 error:(id *)a2;
- (BOOL)recordDirectFeedbackWithEngagedIds:(id)a0 rejectedIds:(id)a1 ignoredIds:(id)a2 neverPresentedIds:(id)a3 error:(id *)a4;
- (void)resolveEntitiesForBatchRequests:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)resolveEntitiesForRequest:(GDEntityResolutionRequest *)a0 completionHandler:(void (^)(GDEntityResolutionResult *, NSError *))a1;
- (id)resolveEntitiesSyncForBatchRequests:(id)a0 error:(id *)a1;
- (id)resolveEntitiesSyncForRequest:(id)a0 error:(id *)a1;
- (void)warmupFor:(long long)a0 completionHandler:(void (^)(NSError *))a1;
- (BOOL)warmupSyncFor:(long long)a0 error:(id *)a1;

@end
