@class SCNNode;

@interface SCNManipulableItem : NSObject {
    double _screenSize;
}

@property (retain, nonatomic) SCNNode *node;
@property (retain, nonatomic) id component;
@property (nonatomic) unsigned long long elementIndex;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } transform;
@property (nonatomic) struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } worldTransform;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } elementPosition;

+ (void)addItems:(id)a0 toScene:(id)a1;
+ (void)removeItemsFromScene:(id)a0;

- (id)parentItem;
- (void)setPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (unsigned long long)hash;
- (void)dealloc;
- (struct SCNVector3 { float x0; float x1; float x2; })scale;
- (double)screenSize;
- (BOOL)isEqual:(id)a0;
- (void)setScreenSize:(double)a0;
- (id)cloneForManipulators;
- (BOOL)isNodeManipulator;
- (void)validateClone;

@end
