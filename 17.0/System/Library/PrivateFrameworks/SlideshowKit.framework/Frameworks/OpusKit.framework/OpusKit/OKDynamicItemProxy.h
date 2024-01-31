@class NSArray, UIBezierPath, NSString, UIDynamicItemBehavior;
@protocol OKDynamicItemProxiedObject;

@interface OKDynamicItemProxy : NSObject <UIDynamicItem>

@property (readonly) id<OKDynamicItemProxiedObject> proxiedObject;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL gravityDisabled;
@property (readonly) UIDynamicItemBehavior *bodyBehavior;
@property (retain, nonatomic) NSArray *collisionGroups;
@property (retain, nonatomic) NSArray *attachmentBehaviors;
@property (retain, nonatomic) NSArray *pushGroups;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
