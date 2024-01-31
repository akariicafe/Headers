@interface CAMFrameworkUtilities : NSObject

@property (class, readonly, nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;

+ (id)snapshotForCrossFadingView:(id)a0 fadeOutDuration:(double)a1 fadeOutDelay:(double)a2 fadeInDuration:(double)a3 fadeInDelay:(double)a4 embedSnapshot:(BOOL)a5;

@end
