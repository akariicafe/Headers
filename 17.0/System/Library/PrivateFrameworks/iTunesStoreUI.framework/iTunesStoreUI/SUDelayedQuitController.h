@class NSMutableArray;

@interface SUDelayedQuitController : NSObject {
    long long _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (id)sharedInstance;
+ (id)checkedInViewControllerOfClass:(Class)a0;
+ (void)checkInLongLivedViewController:(id)a0;
+ (void)beginDelayingTerminate;
+ (void)checkOutLongLivedViewController:(id)a0;
+ (void)endDelayingTerminate;
+ (BOOL)isDelayingTerminate;
+ (BOOL)viewControllerIsLongLived:(id)a0;

- (void)dealloc;
- (void)_beginDelayingTerminate;
- (void)_checkInLongLivedViewController:(id)a0;
- (void)_checkOutLongLivedViewController:(id)a0;
- (id)_checkedInViewControllerOfClass:(Class)a0;
- (void)_endDelayingTerminate;
- (BOOL)_isDelayingTerminate;
- (BOOL)_viewControllerIsLongLived:(id)a0;

@end
