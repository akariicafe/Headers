@class GDXPCEntityResolutionService;

@interface GDEntityResolutionTextClient : NSObject {
    GDXPCEntityResolutionService *xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (id)resolveEntitiesForRequest:(id)a0 error:(id *)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
