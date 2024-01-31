@interface UISceneHitTestAction : BSAction

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } touchLocation;

- (void)sendResponse:(id)a0;
- (long long)UIActionType;
- (id)initWithTouchLocation:(struct CGPoint { double x0; double x1; })a0 responseHandler:(id /* block */)a1;

@end
