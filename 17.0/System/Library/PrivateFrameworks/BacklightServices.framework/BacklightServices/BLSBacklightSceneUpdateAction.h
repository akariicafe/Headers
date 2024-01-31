@class BLSBacklightChangeEvent;

@interface BLSBacklightSceneUpdateAction : BSAction

@property (readonly, nonatomic) BLSBacklightChangeEvent *event;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isTouchTargetable) BOOL touchTargetable;
@property (readonly, nonatomic) BOOL isUpdateToDateSpecifier;

- (id)initWithBacklightChangeEvent:(id)a0 animated:(BOOL)a1 touchTargetable:(BOOL)a2 isUpdateToDateSpecifier:(BOOL)a3 completion:(id /* block */)a4;

@end
