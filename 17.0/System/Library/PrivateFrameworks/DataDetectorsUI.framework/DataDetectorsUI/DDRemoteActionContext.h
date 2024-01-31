@class NSArray, NSDictionary, NSURL, NSString;

@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *URL;
@property struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *result;
@property (retain) NSDictionary *context;
@property (retain) NSArray *associatedResults;
@property (retain) NSString *actionClass;
@property (readonly) NSArray *associatedVisualResults;
@property (copy) NSString *hostApplicationIdentifier;

+ (BOOL)isClassAllowedFromString:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a1 context:(id)a2 associatedResults:(id)a3 associatedVisualResults:(id)a4 className:(id)a5;

@end
