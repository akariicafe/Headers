@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    MPMediaItemCollection *_musicCollection;
}

+ (id)sharedInstance;
+ (int)randomTransition;

- (id)init;
- (void)dealloc;
- (void)setTransition:(int)a0;
- (int)transition;
- (id)musicCollection;
- (BOOL)shouldPlayMusic;
- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)a0;
- (void)reloadPhotoDefaultValues;
- (void)setMusicCollection:(id)a0;
- (void)setShouldPlayMusic:(BOOL)a0;
- (BOOL)summarizeMomentSections;
- (int)transitionForAnimationMovingForward:(BOOL)a0;

@end
