@class GDEntityResolutionCollectionResult, NSString, GDMentionGenerationResult, GDEntityResolutionRequest, NSError, GDEntityResolutionResult;

@interface _TtCC24IntelligencePlatformCore19EntityResolutionXPC6Server : NSObject <GDEntityResolutionXPCProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)generateMentionsForQuery:(NSString *)a0 withCompletion:(void (^)(GDMentionGenerationResult *, NSError *))a1;
- (void)submitCollectionQuery:(GDEntityResolutionRequest *)a0 withCompletion:(void (^)(GDEntityResolutionCollectionResult *, NSError *))a1;
- (void)submitQuery:(GDEntityResolutionRequest *)a0 withCompletion:(void (^)(GDEntityResolutionResult *, NSError *))a1;
- (void)warmupForMode:(long long)a0 withCompletion:(void (^)(BOOL, NSError *))a1;

@end
