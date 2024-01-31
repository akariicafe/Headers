@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}

@property (retain, nonatomic) SKScene *scene;

- (BOOL)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)dealloc;
- (BOOL)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)touchesMoved:(id)a0 withEvent:(id)a1;

@end
