@class NSString, CPLPlatformObject;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject> {
    double _startWaitingForBatch;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithLibraryManager:(id)a0;
- (void)commitChangeBatch:(id)a0 withUnderlyingCompletionHandler:(id /* block */)a1;
- (void)commitChangeBatch:(id)a0 completionHandler:(id /* block */)a1;

@end
