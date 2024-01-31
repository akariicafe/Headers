@interface SGModelAsset : NSObject

+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (void)_reset;
+ (id)nameDetectorRules;
+ (id)signatureRules;
+ (id)quickResponsesVocab;
+ (id)quickResponses;
+ (id)dpRecorderRules;
+ (id)vocabWithTrieFilename:(id)a0;
+ (id)metricsConfig;
+ (id)asset;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)rules;
+ (void)_invokeOnUpdateBlock;
+ (id)mappings;

@end
