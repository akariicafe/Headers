@class UISelectionFeedbackGenerator;

@interface CEKSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *_feedbackGenerator;
@property (readonly, nonatomic) unsigned int _endStopSoundID;
@property (readonly, nonatomic) unsigned int _majorTickSoundID;
@property (readonly, nonatomic) unsigned int _minorTickSoundID;
@property (readonly, nonatomic) unsigned int _overscrollTickSoundID;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)performFeedback;
- (void)prepareFeedback;
- (void)playEndTickSound;
- (void)playMajorTickSound;
- (void)playMinorTickSound;
- (void)playOverscrollTickSound;

@end
