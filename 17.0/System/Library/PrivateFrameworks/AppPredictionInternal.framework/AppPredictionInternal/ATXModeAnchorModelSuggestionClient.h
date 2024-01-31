@class _PASXPCClientHelper;

@interface ATXModeAnchorModelSuggestionClient : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)anchorModelDidProvideModeSuggestions:(id)a0;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;
- (void)_pingServer;
- (void).cxx_destruct;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;

@end
