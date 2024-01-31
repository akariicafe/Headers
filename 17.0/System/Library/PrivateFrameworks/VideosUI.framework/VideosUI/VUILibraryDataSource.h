@protocol VUILibraryDataSourceDelegate;

@interface VUILibraryDataSource : NSObject

@property (weak, nonatomic) id<VUILibraryDataSourceDelegate> delegate;
@property (nonatomic) BOOL hasCompletedInitialFetch;

- (void).cxx_destruct;

@end
