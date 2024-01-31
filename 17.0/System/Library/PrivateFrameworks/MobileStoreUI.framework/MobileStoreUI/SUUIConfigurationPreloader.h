@class SUUIReloadConfigurationOperation, NSDictionary, NSOperationQueue, NSString, NSMutableArray;

@interface SUUIConfigurationPreloader : NSObject

@property (readonly) BOOL hasExistingConfigurationCache;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) SUUIReloadConfigurationOperation *pendingReloadOperation;
@property (retain, nonatomic) NSDictionary *loadedConfiguration;
@property (readonly, copy, nonatomic) NSString *configurationCachePath;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurationCachePath:(id)a0;
- (id)newReloadConfigurationOperation;
- (void)finishPreloadingConfiguration:(id)a0 error:(id)a1;
- (void)preloadConfigurationForPurpose:(long long)a0 withCompletionBlock:(id /* block */)a1;

@end
