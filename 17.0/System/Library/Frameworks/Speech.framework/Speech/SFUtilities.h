@interface SFUtilities : NSObject

+ (void)initialize;
+ (id)languageStringForLocaleString:(id)a0;
+ (id)localeStringForLanguageString:(id)a0;
+ (id)defaultClientID;
+ (id)transcriptionFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (void)supportedLocalesWithCompletion:(id /* block */)a0;
+ (BOOL)canAccessPathAt:(id)a0 methodName:(id)a1 error:(id *)a2;
+ (void)createDirPath:(id)a0;
+ (BOOL)isCacheDirInternal;
+ (BOOL)isSpeechXPCEnabled;
+ (id)issueReadSandboxExtensionForFilePath:(id)a0 error:(id *)a1;
+ (id)issueReadWriteSandboxExtensionForDirectoryPath:(id)a0 error:(id *)a1;
+ (id)recognitionMetadataFromSpeechPhrases:(id)a0 afAudioAnalytics:(id)a1 utteranceStart:(double)a2;
+ (id)recognizedResultFromPackage:(id)a0;
+ (id)sandboxExtensionsForUsingANEAndAssets;
+ (id)taskNameFromTaskHint:(long long)a0;
+ (id)transcriptionsWithTokens:(id)a0;

@end
