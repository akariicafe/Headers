@class NSMutableDictionary, NSSet, WBSCoalescedAsynchronousWriter;

@interface WBSOnDeviceSearchSuggestionsModelManager : NSObject {
    NSMutableDictionary *_localeIdentifiersToChecksums;
    WBSCoalescedAsynchronousWriter *_asyncWriter;
    NSSet *_supportedLocaleIdentifiers;
}

@property (class, readonly, nonatomic) WBSOnDeviceSearchSuggestionsModelManager *sharedManager;

@property (readonly, nonatomic) BOOL needsSupportedLocaleUpdate;

- (id)init;
- (void)clearModels;
- (void).cxx_destruct;
- (BOOL)isLocaleSupported:(id)a0;
- (id)_dictionaryToSave;
- (void)_updateModelFileOnDisk;
- (void)addOrUpdateModelForLocale:(id)a0 withChecksum:(id)a1;
- (id)currentChecksumForModelWithLocale:(id)a0;
- (id)fileURLForModelWithLocale:(id)a0;
- (id)fileURLForModelWithLocaleIfDownloaded:(id)a0;
- (BOOL)haveModelForLocale:(id)a0;
- (void)updateSupportedModelLocales:(id)a0;

@end
