@class NSArray, NSString;
@protocol _GCHIDEventSource;

@interface _GCMotionEventHIDAdapter : NSObject <_GCMotionEventSource>

@property (retain, nonatomic) id<_GCHIDEventSource> HIDEventSource;
@property (retain, nonatomic) id HIDEventObservation;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 service:(id)a1;
- (id)observeMotionEvents:(id /* block */)a0;

@end
