@interface ActivityDispatcher : NSObject

+ (id)getErrorFailedCollectors:(id)a0;
+ (id)getErrorNoCollectorDefinitionsToRun;
+ (id)getExecQ;

- (void)runCollectorsDefinedInParameters:(id)a0 completion:(id /* block */)a1;

@end
