@class NSMutableDictionary;
@protocol CAMTimerCacheDelegate;

@interface CAMTimerCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_timersByType;
@property (weak, nonatomic) id<CAMTimerCacheDelegate> delegate;

- (id)init;
- (void)cancelTimerForKey:(id)a0;
- (void)_handleTimer:(id)a0 forKey:(id)a1;
- (void)startTimerForKey:(id)a0 duration:(double)a1;
- (void)cancelAllTimers;
- (void).cxx_destruct;
- (BOOL)isRunningTimerForKey:(id)a0;

@end
