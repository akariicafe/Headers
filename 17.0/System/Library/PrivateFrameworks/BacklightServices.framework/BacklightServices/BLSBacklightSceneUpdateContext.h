@class BLSBacklightSceneVisualState, BLSAlwaysOnFrameSpecifier, BLSBacklightChangeEvent;

@interface BLSBacklightSceneUpdateContext : NSObject

@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState;
@property (readonly, nonatomic) BLSBacklightSceneVisualState *previousVisualState;
@property (readonly, nonatomic) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) BLSBacklightChangeEvent *triggerEvent;
@property (readonly, nonatomic, getter=isTouchTargetable) BOOL touchTargetable;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVisualState:(id)a0 previousVisualState:(id)a1 frameSpecifier:(id)a2 animated:(BOOL)a3 triggerEvent:(id)a4 touchTargetable:(BOOL)a5;

@end
