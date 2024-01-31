@class NSString, NSError;

@interface _TtCC24IntelligencePlatformCore14SysdiagnoseXPC6Server : NSObject <GDSysdiagnoseXPCProtocol>

- (id)init;
- (void)diagnosticsWithCompletion:(void (^)(NSString *, NSError *))a0;
- (void)entityRelevanceRankingSupplementalDiagnosticsWithCompletion:(void (^)(NSString *, NSError *))a0;
- (void)entityResolutionSupplementalDiagnosticsWithCompletion:(void (^)(NSString *, NSError *))a0;
- (void)entityTaggingSupplementalDiagnosticsWithCompletion:(void (^)(NSString *, NSError *))a0;
- (void)viewsSupplementalDiagnosticsWithCompletion:(void (^)(NSString *, NSError *))a0;

@end
