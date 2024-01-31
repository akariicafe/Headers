@class NSString;

@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_CTServerConnectionRegisterBlockForNotification:(struct __CTServerConnection { } *)a0 :(struct __CFString { } *)a1 :(id /* block */)a2;
- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection { } *)a0 :(struct __CFString { } *)a1;
- (struct __CTServerConnection { } *)_CTServerConnectionCreateOnTargetQueue:(struct __CFAllocator { } *)a0 :(struct __CFString { } *)a1 :(id)a2 :(id /* block */)a3;

@end
