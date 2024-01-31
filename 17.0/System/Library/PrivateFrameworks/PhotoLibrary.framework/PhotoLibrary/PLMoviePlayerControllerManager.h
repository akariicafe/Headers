@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {
    NSMutableArray *_playerStack;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)moveControllerToTopOfStack:(id)a0;
- (void)removeControllerFromStack:(id)a0;

@end
