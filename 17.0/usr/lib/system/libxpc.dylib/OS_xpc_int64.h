@class NSString;

@interface OS_xpc_int64 : OS_xpc_object <OS_xpc_int64>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
