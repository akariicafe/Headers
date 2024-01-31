@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)_startLanding;
- (void)draggedObjectLanded;
- (void)_stopLanding;
- (void)draggedObjectLifted;
- (void)userInteractionEnded;
- (void)objectSnapped;

@end
