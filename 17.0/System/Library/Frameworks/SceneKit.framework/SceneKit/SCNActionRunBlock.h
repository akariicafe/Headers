@class NSObject;
@protocol OS_dispatch_queue;

@interface SCNActionRunBlock : SCNAction {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)supportsSecureCoding;
+ (id)runBlock:(id /* block */)a0 queue:(id)a1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:(id)a0 forTime:(double)a1;

@end
