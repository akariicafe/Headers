@class NSString, BSServiceConnectionEndpoint, FBSWorkspaceScenesClient;

@interface FBSWorkspaceService : NSObject {
    FBSWorkspaceScenesClient *_client;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;

- (id)init;
- (void)sendActions:(id)a0;
- (void)sendActions:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (id)createScene:(id /* block */)a0;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)_initWithEndpoint:(id)a0 identifier:(id)a1;
- (id)createScene:(id /* block */)a0 completion:(id /* block */)a1;

@end
