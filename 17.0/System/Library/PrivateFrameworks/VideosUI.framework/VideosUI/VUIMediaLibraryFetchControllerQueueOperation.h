@class NSArray;

@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSArray *fetchControllers;
@property (nonatomic) unsigned long long mediaLibraryRevision;

- (id)init;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)initWithFetchControllers:(id)a0 mediaLibraryRevision:(unsigned long long)a1;

@end
