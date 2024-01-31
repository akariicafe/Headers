@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction

@property (retain, nonatomic) FBSScene *scene;
@property (retain, nonatomic) FBSSerialQueue *callOutQueue;

- (void).cxx_destruct;

@end
