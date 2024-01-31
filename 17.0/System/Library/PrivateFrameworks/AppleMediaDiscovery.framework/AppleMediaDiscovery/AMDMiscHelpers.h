@interface AMDMiscHelpers : NSObject

+ (BOOL)ensureDir:(id)a0 removeIfExists:(BOOL)a1;
+ (BOOL)createOrMoveSymbolicLinkAtURL:(id)a0 toDestinationURL:(id)a1;
+ (void)AMDPerformCleanup;
+ (id)extractPECSimilarityScores:(id)a0 error:(id *)a1;
+ (void)setAppStoreDirAttributes;
+ (void)AMDInitialize:(id)a0;
+ (id)sortArrayElements:(id)a0 inDescendingOrder:(BOOL)a1 withComparisonKey:(id)a2 isKeyString:(BOOL)a3;
+ (BOOL)isValidDSID:(id)a0;
+ (id)logAndCreateError:(long long)a0 errorMessage:(id)a1;
+ (void)printInput:(id)a0 withRawData:(void *)a1 withType:(long long)a2 andSize:(int)a3;
+ (id)getCurrentEpochSeconds;
+ (id)convertDataArrayToBase64StringArray:(id)a0;

@end
