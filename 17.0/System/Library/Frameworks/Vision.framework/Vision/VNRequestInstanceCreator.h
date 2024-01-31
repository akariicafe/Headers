@protocol VNRequestInstanceCreatorDelegate;

@interface VNRequestInstanceCreator : NSObject {
    id<VNRequestInstanceCreatorDelegate> _delegate;
}

+ (id)defaultCreator;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)newRequestInstanceOfClass:(Class)a0 withCompletionHandler:(id /* block */)a1 revision:(unsigned long long)a2 error:(id *)a3;
- (id)_newVNRequestInstanceOfClass:(Class)a0 withCompletionHandler:(id /* block */)a1 revision:(unsigned long long)a2 error:(id *)a3;
- (id)_newVNTargetedImageRequestInstanceOfClass:(Class)a0 withCompletionHandler:(id /* block */)a1 revision:(unsigned long long)a2 error:(id *)a3;
- (id)errorForFailedInstanceCreationOfRequestClass:(Class)a0 withCompletionHandler:(id /* block */)a1;

@end
