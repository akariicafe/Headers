@class NSString;

@interface BKHIDScrollEventProcessor : NSObject <BKHIDEventProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;
- (void)_dispatchEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1 dispatcher:(id)a2 destinations:(id)a3;

@end
