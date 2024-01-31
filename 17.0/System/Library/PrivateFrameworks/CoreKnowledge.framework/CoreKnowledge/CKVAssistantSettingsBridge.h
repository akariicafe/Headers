@interface CKVAssistantSettingsBridge : NSObject

+ (BOOL)isSiriUODSupported;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isAssistantEnabled;
+ (id)currentSiriLanguageCode;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (id)_getConformingSharedUserIdsIsATV:(BOOL)a0;
+ (id)getConformingSharedUserIds;
+ (BOOL)isASRSupported;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isCustomerInstall;
+ (BOOL)isDictationEnabled;

- (id)init;

@end
