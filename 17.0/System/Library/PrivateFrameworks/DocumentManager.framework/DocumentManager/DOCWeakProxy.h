@class NSObject;

@interface DOCWeakProxy : NSObject

@property (weak) NSObject *target;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
