@interface CDMFoundation.CDMCATIUSOParseHelpers : NSObject

+ (id)buildCrisisSupportParseWithAppBundleId:(id)a0 guid:(id)a1 intentName:(id)a2 ensembleType:(id)a3;
+ (id)buildCrisisSupportParseWithAppBundleId:(id)a0 guid:(id)a1 intentName:(id)a2 ensembleType:(id)a3 addEntitySpans:(BOOL)a4;
+ (id)buildSocialConversationParseWithAppBundleId:(id)a0 guid:(id)a1 intentName:(id)a2 ensembleType:(id)a3;
+ (id)buildSocialConversationParseWithAppBundleId:(id)a0 guid:(id)a1 intentName:(id)a2 ensembleType:(id)a3 addEntitySpans:(BOOL)a4;

- (id)init;

@end
