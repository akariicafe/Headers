@class NSString;
@protocol SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;

@interface SVAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SVVideoPlaybackObserver>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoBounds;
@property (nonatomic) unsigned long long behavior;
@property (weak, nonatomic) id<SVAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)conditionsChanged;
- (BOOL)fullscreenPlaybackRequiredForCurrentConditions;
- (void)playbackCoordinatorResumedPlayback:(id)a0;
- (void)playbackCoordinatorStartedPlayback:(id)a0;

@end
