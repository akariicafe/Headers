@class XRSpace;
@protocol NSObject;

@interface _XRSpaceNotificationShim : NSObject

@property (weak, nonatomic) id<NSObject> observer;
@property (weak, nonatomic) id<NSObject> target;
@property (nonatomic) BOOL targetIsSet;
@property (retain, nonatomic) id<NSObject> token;
@property (weak, nonatomic) XRSpace *space;

- (void)dealloc;
- (void).cxx_destruct;

@end
