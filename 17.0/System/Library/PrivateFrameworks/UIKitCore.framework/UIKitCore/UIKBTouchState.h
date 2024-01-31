@class NSUUID, UIWindow, UITouch;

@interface UIKBTouchState : NSObject <NSCopying>

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } locationInWindow;
@property (readonly, nonatomic) double pathMajorRadius;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) NSUUID *touchUUID;
@property (readonly, nonatomic) unsigned long long tapCount;
@property (readonly, nonatomic) long long inputSource;
@property (readonly, weak, nonatomic) UITouch *uiTouch;

+ (void)releaseUUIDForTouch:(id)a0;
+ (id)touchForTouchUUID:(id)a0;
+ (id)touchStateForTouch:(id)a0;
+ (id)touchStateForTouchUUID:(id)a0 withTimestamp:(double)a1 phase:(long long)a2 location:(struct CGPoint { double x0; double x1; })a3 pathIndex:(unsigned char)a4 inView:(id)a5;
+ (id)touchUUIDForTouch:(id)a0;
+ (id)touchUUIDsForTouches:(id)a0;
+ (id)touchesForTouchUUIDs:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
