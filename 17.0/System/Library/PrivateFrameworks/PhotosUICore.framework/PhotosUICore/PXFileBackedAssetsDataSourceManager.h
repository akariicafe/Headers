@class NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager

@property (readonly, nonatomic) NSMutableDictionary *fileURLsBySection;

+ (id)emptyFileBackedDataSourceManager;
+ (id)fileBackedDataSourceManagerWithDirectory:(id)a0;

- (void).cxx_destruct;
- (void)_createDataSource;
- (id)initWithFileURLsBySection:(id)a0;
- (void)insertFileURL:(id)a0 atIndex:(long long)a1 inSection:(long long)a2;
- (void)removeFileURLsAtIndexes:(id)a0 inSection:(long long)a1;

@end
