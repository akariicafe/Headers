@interface TPSSearchItemIndexer : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyIndexer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipsIndexer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_userGuideIndexer;
}

@property (class, nonatomic, readonly) TPSSearchItemIndexer *default;

- (void)deleteAllItemsWithQualityOfService:(long long)a0 completionHandler:(id /* block */)a1;
- (void)indexTips:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void)indexUserGuides:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void)reindexTips:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void)reindexUserGuides:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
