@class _FBSceneClientProcess, NSSet, RBSProcessHandle;

@interface FBSceneClientHandshake : NSObject

@property (readonly, nonatomic) _FBSceneClientProcess *process;
@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) NSSet *remnants;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithHandle:(id)a0 remnants:(id)a1;

@end
