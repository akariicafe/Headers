@class PXCMMFileBackedActionManager;

@interface PXCMMFileBackedContext : PXCMMContext {
    PXCMMFileBackedActionManager *_fileBackedActionManager;
}

+ (id)fileBackedContextWithDirectoryURL:(id)a0 activityType:(unsigned long long)a1 title:(id)a2;

- (id)actionManager;
- (void).cxx_destruct;
- (id)initWithAssetsDataSourceManager:(id)a0 mediaProvider:(id)a1 activityType:(unsigned long long)a2;

@end
