@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {
    long long _identifier;
    NSOperationQueue *_operationQueue;
    id /* block */ _block;
}

@property (readonly, nonatomic) long long identifer;

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void)invokeWithDocumentRoot:(id)a0;

@end
