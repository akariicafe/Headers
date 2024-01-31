@class NSArray, PTHandGesture, PTPersonReactionSlot, NSNumber;

@interface PTPersonWithReactions : NSObject {
    PTPersonReactionSlot *_leftHandSlot;
    PTPersonReactionSlot *_rightHandSlot;
    PTPersonReactionSlot *_bothHandsSlot;
    PTHandGesture *_unknownGesture;
    BOOL _bothHandsDetected;
}

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSArray *reactions;
@property int numFramesInactive;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTwoHandReactionEndTime;
@property unsigned int lastTwoHandReactionType;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_stopActiveGestureOnSlot:(id)a0;
- (void)_updateReactionSlot:(id)a0 withOneHand:(id)a1 optionalOtherHand:(id)a2 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)updateWithLeftHand:(id)a0 rightHand:(id)a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
