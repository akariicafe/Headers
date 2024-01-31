@interface DDScannerService : NSObject

+ (void)cancelJob:(long long)a0;
+ (id)scanString:(id)a0;
+ (long long)scanString:(id)a0 completionBlock:(id /* block */)a1;
+ (id)scanString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 configuration:(id)a2;
+ (void)appendWatchOSLinksToString:(id)a0;
+ (id)scanQuery:(struct __DDScanQuery { } *)a0 configuration:(id)a1;
+ (long long)scanQuery:(struct __DDScanQuery { } *)a0 configuration:(id)a1 completionBlock:(id /* block */)a2;
+ (long long)scanString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 configuration:(id)a2 completionBlock:(id /* block */)a3;

@end
