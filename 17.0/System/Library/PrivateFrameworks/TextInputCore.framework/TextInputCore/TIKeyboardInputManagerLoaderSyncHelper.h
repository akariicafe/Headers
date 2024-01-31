@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
}

@property (copy, nonatomic) id /* block */ languageUpdated;

+ (void)deleteCloudKitBackup;

- (void)languagePulled:(id)a0;
- (id)init;
- (void)dealloc;
- (void)languagesChanged:(id)a0;
- (BOOL)shouldCacheObject:(id)a0;
- (void)willLoadLanguage:(id)a0;
- (void).cxx_destruct;
- (void)noteObject:(id)a0 forLanguage:(id)a1;

@end
