@class NSTimer;

@interface SFBookmarksLockCoordinator : NSObject {
    BOOL _haveBookmarksLock;
    BOOL _needsBookmarksLockOnAppResume;
    NSTimer *_bookmarkLockTimer;
}

@property (class, readonly, nonatomic) SFBookmarksLockCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL hasBookmarksLock;

+ (void)showLockedDatabaseAlertForAction:(long long)a0 fromViewController:(id)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearBookmarkLockTimer;
- (void)_didBecomeActive;
- (void)_unlockBookmarksNow;
- (void)_willResignActive;
- (BOOL)lockBookmarks;
- (void)unlockBookmarksIfNeeded;
- (void)unlockBookmarksSoon;

@end
