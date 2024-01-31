@class FBSOpenApplicationService;

@interface CRSOpenApplicationService : NSObject {
    FBSOpenApplicationService *_openService;
}

+ (id)defaultService;

- (void).cxx_destruct;
- (void)openApplication:(id)a0 completion:(id /* block */)a1;

@end
