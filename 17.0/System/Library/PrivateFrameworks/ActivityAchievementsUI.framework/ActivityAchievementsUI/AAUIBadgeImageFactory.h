@class AAUIAchievementResourceProvider, NSMutableDictionary, NSObject, AAUIBadgeView;
@protocol OS_dispatch_queue;

@interface AAUIBadgeImageFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider;
@property (retain, nonatomic) AAUIBadgeView *earnedBadgeView;
@property (retain, nonatomic) AAUIBadgeView *unearnedBadgeView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (id)init;
- (void).cxx_destruct;
- (void)clearAllCachedImages;
- (double)_stackBadgeOverlapForStackType:(int)a0;
- (id)_availableAchievementsForStackType:(int)a0 andAchievements:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForSize:(struct CGSize { double x0; double x1; })a0 isRTL:(BOOL)a1 isStack:(BOOL)a2;
- (id)_makeGradientImage:(id)a0 solidGradient:(struct CGGradient { } *)a1 gradient:(struct CGGradient { } *)a2 isRTL:(BOOL)a3;
- (struct CGGradient { } *)_makeShadowGradient;
- (struct CGGradient { } *)_makeShadowSolidGradient;
- (id)_perfectCropForImage:(id)a0 andDirections:(unsigned long long)a1;
- (id)_queue_generateImageForConfiguration:(id)a0 size:(struct CGSize { double x0; double x1; })a1 stackType:(int)a2 isRTL:(BOOL)a3 unearned:(BOOL)a4;
- (id)_queue_thumbnailImageForAchievements:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(int)a2 stackType:(int)a3;
- (BOOL)hasCachedThumbnailImageForAchievement:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)hasCachedThumbnailImageForAchievements:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(int)a2;
- (BOOL)hasCachedThumbnailImageForAchievements:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(int)a2 stackType:(int)a3;
- (id)thumbnailImageForAchievement:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)thumbnailImageForAchievements:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(int)a2;
- (id)thumbnailImageForAchievements:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(int)a2 stackType:(int)a3;

@end
