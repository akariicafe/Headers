@class NSString;

@interface SHSheetDraggingEvent : NSObject <BSXPCSecureCoding>

@property (nonatomic) long long type;
@property (nonatomic) double rubberBandCoefficient;
@property (nonatomic) struct CGPoint { double x; double y; } interruptedOffset;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) BOOL dismissible;
@property (nonatomic) BOOL shouldAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)eventForDraggingDidBeginWithRubberBandCoefficient:(double)a0 dismissible:(BOOL)a1 interruptedOffset:(struct CGPoint { double x0; double x1; })a2;
+ (id)eventForDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 animateChange:(BOOL)a2 dismissible:(BOOL)a3;
+ (id)eventForDraggingDidEnd;

- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
