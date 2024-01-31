@class NSString, RBSProcessHandle;

@interface _FBSceneClientProcess : NSObject <FBSceneClientProcess> {
    RBSProcessHandle *_handle;
}

@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithHandle:(id)a0;
- (void).cxx_destruct;

@end
