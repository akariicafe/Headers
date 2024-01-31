@class NSString;
@protocol DDSMAAutoAssetProvider, DDSMAAutoAssetManagerDataSource;

@interface DDSMAAutoAssetManager : NSObject <DDSMAAutoAssetManager>

@property (readonly, nonatomic) id<DDSMAAutoAssetProvider> provider;
@property (readonly, nonatomic) id<DDSMAAutoAssetManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)downloadAssetForQuery:(id)a0 clientID:(id)a1;
- (id)initWithProvider:(id)a0 dataSource:(id)a1;
- (BOOL)shouldDownloadAutoAssetForClient:(id)a0;

@end
