@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisPhotoLibraryService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;

@end
