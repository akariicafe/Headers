@class NSString, EFFuture;

@interface EFPromise : NSObject <EFCancelable>

@property (readonly) EFFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)respondsToSelector:(SEL)a0;

@end
