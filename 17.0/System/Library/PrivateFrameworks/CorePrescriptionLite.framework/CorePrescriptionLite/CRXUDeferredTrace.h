@interface CRXUDeferredTrace : NSObject

@property unsigned long long code;
@property unsigned long long arg1;
@property unsigned long long arg2;
@property unsigned long long arg3;
@property unsigned long long arg4;

+ (id)deferredTraceWithCode:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;

- (void)dealloc;
- (id)initWithCode:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;

@end
