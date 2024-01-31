@class VUIEventDataSource;

@interface VUIRouterDataSource : NSObject

@property (retain, nonatomic) VUIEventDataSource *selectEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *playEventDataSource;
@property (retain, nonatomic) VUIEventDataSource *contextMenuEventDataSource;

- (void).cxx_destruct;
- (id)initWithLibraryMediaEntity:(id)a0;
- (id)initWithRouterData:(id)a0 appContext:(id)a1;
- (id)initWithRouterData:(id)a0 prefetchedData:(id)a1;

@end
