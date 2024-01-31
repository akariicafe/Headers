@interface CDMNLServiceUtils : NSObject

+ (void)_setWarmupRequestId:(id /* block */)a0;
+ (void)_sortMultilingualVariantsByScoreDescending:(id)a0;
+ (id)buildLVCResponse:(id)a0 lvcRequest:(id)a1;
+ (struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> { struct NLv4ParserRequest *x0; } x0; })buildNLv4ProtoRequest:(id)a0;
+ (id)buildPSCResponse:(id)a0 pscRequest:(id)a1;
+ (id)buildPSCUserParseForExternalParserId:(id)a0 probability:(float)a1 rewriteMsg:(id)a2;
+ (id)buildSNLCProtoResponse:(id)a0 snlcRequest:(id)a1 parserToSet:(id)a2;
+ (id)buildSetupITFMRequest:(id)a0;
+ (id)buildSetupNLv4ProtoRequest:(id)a0;
+ (id)buildSetupSNLCProtoRequest:(id)a0;
+ (id)getPscOverrideProbabilityForLabel:(int)a0;
+ (void)populateParser:(id)a0 parserToSet:(id)a1;

@end
