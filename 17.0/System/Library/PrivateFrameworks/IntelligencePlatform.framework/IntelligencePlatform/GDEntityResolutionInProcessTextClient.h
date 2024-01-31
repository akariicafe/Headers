@class GDEntityResolutionTextClientInner;

@interface GDEntityResolutionInProcessTextClient : NSObject {
    GDEntityResolutionTextClientInner *ecrClient;
}

- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (BOOL)cooldownWithError:(id *)a0;
- (id)initForMode:(long long)a0 error:(id *)a1;
- (id)initWithMode:(long long)a0 error:(id)a1;
- (id)initWithMode:(long long)a0 warmup:(BOOL)a1 error:(id *)a2;
- (BOOL)recordDirectFeedbackWithEngagedIds:(id)a0 rejectedIds:(id)a1 ignored:(id)a2 neverPresented:(id)a3 error:(id *)a4;
- (void)resolveEntitiesForBatchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)resolveEntitiesForBatchRequests:(id)a0 error:(id *)a1;
- (void)resolveEntitiesForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)resolveEntitiesForRequest:(id)a0 error:(id *)a1;
- (void)warmupForMode:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
