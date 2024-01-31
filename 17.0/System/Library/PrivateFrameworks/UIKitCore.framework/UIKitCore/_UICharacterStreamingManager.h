@class UITextView, NSString, CADisplayLink, NSMutableArray;

@interface _UICharacterStreamingManager : NSObject {
    UITextView *_textView;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL _streamingAnimationActive;
    double _lastAnimationUpdateTimeStamp;
    BOOL _committingFinalResults;
}

@property (copy, nonatomic) NSString *previousHypothesis;
@property (copy, nonatomic) NSString *lastHypothesis;
@property (copy, nonatomic) NSString *targetHypothesis;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (nonatomic) double streamingCharacterInsertionRate;
@property (nonatomic) double minDurationBetweenHypotheses;
@property (nonatomic) BOOL discardNextHypothesis;

- (void)_displayLinkFired:(id)a0;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)setupToInsertResultForNewHypothesis:(id)a0;
- (id)initWithTextView:(id)a0;
- (void).cxx_destruct;
- (void)commitFinalResults;
- (void)setWords:(id)a0;

@end
