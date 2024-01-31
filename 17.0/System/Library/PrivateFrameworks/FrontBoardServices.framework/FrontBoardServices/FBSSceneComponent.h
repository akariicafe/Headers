@class NSString;
@protocol FBSComponentScene;

@interface FBSSceneComponent : NSObject <FBSSceneComponent> {
    id<FBSComponentScene> _scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (id)scene;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setScene:(id)a0;
- (id)clientScene;
- (id)hostScene;

@end
