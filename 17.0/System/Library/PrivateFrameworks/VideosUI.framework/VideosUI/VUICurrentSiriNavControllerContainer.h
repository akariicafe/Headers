@class NSPointerArray;

@interface VUICurrentSiriNavControllerContainer : NSObject

@property (retain, nonatomic) NSPointerArray *activeNavigationControllers;

+ (id)sharedInstance;
+ (BOOL)isRunningInSiriPluggin;

- (id)init;
- (void).cxx_destruct;
- (id)currentSiriNavController;
- (void)setCurrentSiriNavController:(id)a0;

@end
