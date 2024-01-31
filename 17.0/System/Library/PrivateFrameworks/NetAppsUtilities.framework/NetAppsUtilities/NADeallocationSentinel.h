@class NSString, NADeallocationTracer;

@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate>

@property (readonly, nonatomic) id targetObject;
@property (readonly, copy, nonatomic) id /* block */ finalizer;
@property (readonly, weak, nonatomic) NADeallocationTracer *tracer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
