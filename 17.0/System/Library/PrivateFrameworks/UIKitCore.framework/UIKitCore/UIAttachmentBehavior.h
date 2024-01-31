@class NSArray, PKExtendedPhysicsBody, PKPhysicsJoint;

@interface UIAttachmentBehavior : UIDynamicBehavior {
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGPoint { double x; double y; } _anchorPointA;
    struct CGPoint { double x; double y; } _anchorPointB;
    PKExtendedPhysicsBody *_anchorBody;
    PKPhysicsJoint *_joint;
    double _damping;
    double _frequency;
    double _length;
    struct CGVector { double dx; double dy; } _axis;
    unsigned long long _attachmentType;
    long long _type;
    struct { unsigned char dampingSet : 1; unsigned char frequencySet : 1; unsigned char lengthSet : 1; unsigned char rangeSet : 1; unsigned char frictionTorqueSet : 1; unsigned char isRevolute : 1; } _stateFlags;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long attachedBehaviorType;
@property (nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (nonatomic) double length;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double frictionTorque;
@property (nonatomic) struct { double minimum; double maximum; } attachmentRange;

+ (BOOL)_isPrimitiveBehavior;
+ (id)fixedAttachmentWithItem:(id)a0 attachedToItem:(id)a1 attachmentAnchor:(struct CGPoint { double x0; double x1; })a2;
+ (id)limitAttachmentWithItem:(id)a0 offsetFromCenter:(struct UIOffset { double x0; double x1; })a1 attachedToItem:(id)a2 offsetFromCenter:(struct UIOffset { double x0; double x1; })a3;
+ (id)pinAttachmentWithItem:(id)a0 attachedToItem:(id)a1 attachmentAnchor:(struct CGPoint { double x0; double x1; })a2;
+ (id)slidingAttachmentWithItem:(id)a0 attachedToItem:(id)a1 attachmentAnchor:(struct CGPoint { double x0; double x1; })a2 axisOfTranslation:(struct CGVector { double x0; double x1; })a3;
+ (id)slidingAttachmentWithItem:(id)a0 attachmentAnchor:(struct CGPoint { double x0; double x1; })a1 axisOfTranslation:(struct CGVector { double x0; double x1; })a2;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (void)_associate;
- (void)_changedParameter;
- (void)_dissociate;
- (void)_reevaluateJoint;
- (void)_updateJointWithRange:(struct { double x0; double x1; })a0;
- (id)initWithItem:(id)a0 attachedToAnchor:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithItem:(id)a0 attachedToItem:(id)a1;
- (id)initWithItem:(id)a0 offsetFromCenter:(struct UIOffset { double x0; double x1; })a1 attachedToAnchor:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithItem:(id)a0 offsetFromCenter:(struct UIOffset { double x0; double x1; })a1 attachedToItem:(id)a2 offsetFromCenter:(struct UIOffset { double x0; double x1; })a3;
- (id)initWithItem:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 attachedToAnchor:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithItem:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 attachedToItem:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;

@end
