@class NSString, CPLPlatformObject;

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject> {
    double _sentBatchTimeInterval;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)acknowledgeChangeBatch:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)a0;

@end
