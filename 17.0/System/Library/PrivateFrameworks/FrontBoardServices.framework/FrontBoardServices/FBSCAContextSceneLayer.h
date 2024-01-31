@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) unsigned int contextID;

+ (id)layerWithCAContext:(id)a0;

- (id)initWithCAContext:(id)a0;
- (id)initWithCAContextID:(unsigned int)a0 level:(double)a1;

@end
