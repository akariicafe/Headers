@class _ATXDataStore, ATXBackgroundSaver;

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram <NSSecureCoding> {
    ATXBackgroundSaver *_saver;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _ATXDataStore *datastore;
@property (readonly, nonatomic) long long histogramType;


- (id)initWithDataStore:(id)a0 histogramType:(long long)a1;
- (void)flush;
- (void)resetHistogram:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2 weight:(float)a3;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 category:(id)a2;
- (BOOL)removeHistoryForCategory:(id)a0;
- (void)resetData;
- (int)removeHistoryForBundleIds:(id)a0;
- (BOOL)removeHistoryForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0 histogramType:(long long)a1 saveOnBackgroundQueue:(id)a2 maxCategoryCount:(unsigned short)a3 pruningMethod:(long long)a4;

@end
