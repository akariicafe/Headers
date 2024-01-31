@protocol MRUSpatialAccessibilityObserverDelegate;

@interface MRUSpatialAccessibilityObserver : NSObject

@property (weak, nonatomic) id<MRUSpatialAccessibilityObserverDelegate> delegate;
@property (nonatomic) BOOL isHeadTrackingEnabled;
@property (nonatomic) BOOL isMonoAudioEnabled;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateHeadTrackingSupported;
- (void)updateMonoAudioEnabled;

@end
