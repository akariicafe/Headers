@class NSObject, Protocol;

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol *protocol;
@property (readonly, retain) NSObject *target;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)protocolCheckerWithTarget:(id)a0 protocol:(id)a1;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (const char *)_localClassNameForClass;
- (struct objc_method_description { SEL x0; char *x1; } *)methodDescriptionForSelector:(SEL)a0;

@end
