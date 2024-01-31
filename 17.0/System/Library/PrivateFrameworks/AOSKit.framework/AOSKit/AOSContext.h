@class NSString, NSThread;

@interface AOSContext : NSObject <NSPortDelegate> {
    struct AOSAccount { } *_account;
    struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *_transaction;
    void /* function */ *_callback;
    NSThread *_callbackThread;
    id _info;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithAccount:(struct AOSAccount { } *)a0 andTransaction:(struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)a1;

- (id)init;
- (void)dealloc;
- (struct AOSAccount { } *)account;
- (void)setAccount:(struct AOSAccount { } *)a0;
- (void)setInfo:(id)a0;
- (struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)transaction;
- (void)finalize;
- (void)setTransaction:(struct AOSTransactionC { Class x0; unsigned char x1; unsigned char x2; void *x3; struct __CFError *x4; void /* function */ *x5; id /* block */ x6; id x7; void *x8; id x9; void /* function */ *x10; void /* function */ *x11; } *)a0;
- (id)info;
- (id)_callbackThread;
- (void)_performCallback;
- (BOOL)scheduleCallback;

@end
