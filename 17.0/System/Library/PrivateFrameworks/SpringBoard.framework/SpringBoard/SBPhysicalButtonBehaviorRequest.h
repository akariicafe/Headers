@class FBScene;

@interface SBPhysicalButtonBehaviorRequest : NSObject

@property (readonly, nonatomic) unsigned long long physicalButtonBehavior;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, weak, nonatomic) FBScene *scene;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhysicalButtonConfiguration:(id)a0 generation:(unsigned long long)a1 identifier:(unsigned long long)a2 scene:(id)a3;

@end
