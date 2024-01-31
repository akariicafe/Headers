@class NSArray, NSString;

@interface VOSGestureCategory : NSObject

@property (class, readonly, nonatomic) VOSGestureCategory *oneFingerTaps;
@property (class, readonly, nonatomic) VOSGestureCategory *twoFingerTaps;
@property (class, readonly, nonatomic) VOSGestureCategory *threeFingerTaps;
@property (class, readonly, nonatomic) VOSGestureCategory *fourFingerTaps;
@property (class, readonly, nonatomic) VOSGestureCategory *fiveFingerTaps;
@property (class, readonly, nonatomic) VOSGestureCategory *oneFingerFlicks;
@property (class, readonly, nonatomic) VOSGestureCategory *twoFingerFlicks;
@property (class, readonly, nonatomic) VOSGestureCategory *threeFingerFlicks;
@property (class, readonly, nonatomic) VOSGestureCategory *fourFingerFlicks;
@property (class, readonly, nonatomic) VOSGestureCategory *twoFingerRotates;
@property (class, readonly, nonatomic) VOSGestureCategory *twoFingerScrubs;
@property (class, readonly, nonatomic) VOSGestureCategory *oneFingerTapAndHolds;
@property (class, readonly, nonatomic) VOSGestureCategory *twoFingerTapAndHolds;
@property (class, readonly, nonatomic) VOSGestureCategory *threeFingerTapAndHolds;
@property (class, readonly, nonatomic) VOSGestureCategory *threeFingerDoubleTapHoldAndFlicks;
@property (class, readonly, nonatomic) VOSGestureCategory *backTaps;
@property (class, readonly, nonatomic) NSArray *allCategories;

@property (retain, nonatomic) NSArray *gestures;
@property (retain, nonatomic) NSString *localizedCategoryName;

+ (BOOL)isFlickGesture:(id)a0;
+ (BOOL)isScrubGesture:(id)a0;
+ (BOOL)isRotateGesture:(id)a0;
+ (BOOL)isTapAndHoldGesture:(id)a0;
+ (BOOL)isTapGesture:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsGesture:(id)a0;
- (id)initWithGestures:(id)a0 localizedCategoryName:(id)a1;

@end
