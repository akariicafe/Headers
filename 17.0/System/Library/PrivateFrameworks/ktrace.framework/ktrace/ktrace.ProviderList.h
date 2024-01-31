@interface ktrace.ProviderList : NSObject {
    void /* unknown type, empty encoding */ providers;
    void /* unknown type, empty encoding */ machine;
}

- (id)init;
- (void).cxx_destruct;
- (void)postprocessingCompleteWithFile:(void *)a0;
- (void)configurePostprocessingWithSession:(void *)a0;
- (void)configureWithSession:(void *)a0;
- (BOOL)containsWithName:(id)a0;
- (void)didEndTracingWithFile:(void *)a0;
- (void)didStartTracingWithFile:(void *)a0;
- (id)initWithMachine:(struct ktrace_machine { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; char *x6; char *x7; char *x8; char *x9; char *x10; char *x11; char *x12; char *x13; char *x14; char *x15; unsigned int *x16; unsigned long long *x17; unsigned int *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; int x27; int x28; int x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; struct __CFDictionary *x35; } *)a0;
- (BOOL)shouldStartTracingWithConfiguration:(struct ktrace_config { char *x0; char *x1; char *x2; struct { char *x0; int *x1; unsigned long long *x2; unsigned long long *x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; } x3; struct { unsigned long long *x0; unsigned long long *x1; int *x2; unsigned int *x3; unsigned long long *x4; char *x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned int x14; unsigned long long x15; unsigned int x16; } x4; struct { unsigned long long *x0; unsigned long long *x1; unsigned int *x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; } x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; } *)a0 error:(id *)a1;
- (void)willEndTracingWithFile:(void *)a0;
- (void)willFinishWithCatalog:(void *)a0 file:(void *)a1;
- (void)willStartTracingWithFile:(void *)a0;

@end
