@class NSURL, NSMutableDictionary;

@interface KVSkitWriter : NSObject <KVSkitWriteAccess> {
    NSURL *_directoryURL;
    NSMutableDictionary *_info;
    struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> { struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> { struct Indexer *__value_; } __ptr_; } _indexer;
    BOOL _inTransaction;
    long long _transactionLocale;
}

@property (readonly, nonatomic) unsigned long long flushThreshold;

+ (void)initialize;

- (BOOL)shouldMerge:(BOOL *)a0 error:(id *)a1;
- (id)init;
- (BOOL)isSupportedItemType:(long long)a0;
- (BOOL)rollbackChanges:(id *)a0;
- (BOOL)removeVocabularyItemWithRecordId:(id)a0 error:(id *)a1;
- (BOOL)setTransactionLocale:(long long)a0 assetPath:(id)a1 error:(id *)a2;
- (BOOL)cleanup:(id *)a0;
- (id)initWithSkitDirectoryURL:(id)a0 dataProtectionClass:(int)a1 flushThreshold:(unsigned long long)a2;
- (id).cxx_construct;
- (BOOL)_loadLocaleWithError:(id *)a0;
- (BOOL)_saveLocaleWithError:(id *)a0;
- (long long)indexLocale;
- (long long)_indexLocale;
- (BOOL)addVocabularyItemWithBuffer:(id)a0 originAppId:(id)a1 recordId:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)_resetTransactionSate;
- (BOOL)_beginTransactionWithError:(id *)a0;
- (BOOL)commitChanges:(BOOL *)a0 error:(id *)a1;
- (BOOL)clearWithError:(id *)a0;

@end
