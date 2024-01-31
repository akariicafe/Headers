@class NSArray;

@interface RTTDictionaryManager : NSObject

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_downloadAsset:(id)a0;
- (id)_ttyDictionaryAsset;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;

@end
