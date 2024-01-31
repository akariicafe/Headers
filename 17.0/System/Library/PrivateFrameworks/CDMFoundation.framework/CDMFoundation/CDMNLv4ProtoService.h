@class SNLPNaturalLanguageParser;

@interface CDMNLv4ProtoService : CDMDAGBaseService {
    SNLPNaturalLanguageParser *_parser;
}

+ (id)assetsPathURLForModelBundle:(id)a0;
+ (id)buildEmptyNLv4ResponseCommand:(id)a0;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getParserEnum;
+ (void)handleTrialAssetUpdate:(id)a0 selfMetadata:(id)a1;
+ (void)handleXPCActivity:(id)a0 withAssets:(id)a1 withSelfMetadata:(id)a2;
+ (void)handleXPCEvent:(id)a0 fromStream:(id)a1 withAssets:(id)a2 withSelfMetadata:(id)a3;
+ (id)parserFromAssetDirectory:(id)a0 selfMetadata:(id)a1 error:(id *)a2;
+ (id)xpcActivitySupported;
+ (id)xpcEventStreamsSupported;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)buildNLv4ResponseCommand:(id)a0 requestId:(id)a1;
- (id)doNLv4Inference:(id)a0 outError:(id *)a1;
- (id)handleRequestCommandTypeNames;
- (id)parserFromAssetDirectory:(id)a0 selfMetadata:(id)a1 error:(id *)a2;

@end
