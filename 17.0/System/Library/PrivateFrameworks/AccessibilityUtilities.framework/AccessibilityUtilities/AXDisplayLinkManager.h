@class NSMutableSet, CADisplayLink;

@interface AXDisplayLinkManager : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CADisplayLink *storedDisplayLink;
@property (retain, nonatomic) NSMutableSet *activeTargetActions;
@property (retain, nonatomic) NSMutableSet *updatedTargetActions;
@property (nonatomic) BOOL hasUpdatedTargetActions;
@property (nonatomic, getter=isHandlingDisplayRefresh) BOOL handlingDisplayRefresh;
@property (nonatomic) unsigned long long warmUpModeRequirementsCount;
@property (readonly, nonatomic, getter=isWarmUpModeEnabled) BOOL warmUpModeEnabled;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;

- (id)init;
- (void).cxx_destruct;
- (void)_didAddFirstTargetAction;
- (void)_didRemoveLastTargetAction;
- (void)_displayDidRefresh:(id)a0;
- (id)_prepareUpdatedTargetActionsForModification;
- (void)addTarget:(id)a0 selector:(SEL)a1;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (void)removeTarget:(id)a0 selector:(SEL)a1;

@end
