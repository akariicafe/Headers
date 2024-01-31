@class NSOperationQueue, NTKTimelineDataSourceWrapper, NSString;
@protocol CLKComplicationDataSource;

@interface NTKTimelineRemoteDataSourceProvider : NSObject <TLTimelineDataSourceProvider>

@property (readonly, nonatomic) NTKTimelineDataSourceWrapper *wrapper;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) id<CLKComplicationDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)tl_getDataSourceWithCompletion:(id /* block */)a0;
- (void)getCurrentEntryForComplication:(id)a0 completion:(id /* block */)a1;
- (void)getEntriesForComplication:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;

@end
