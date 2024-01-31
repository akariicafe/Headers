@interface PCSShareProtectionObject : NSObject {
    struct _PCSIdentityData { } *_identity;
}

@property (readonly, nonatomic) struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct _PCSIdentitySetData *x1; struct _PCSIdentitySetData *x2; struct _PCSIdentitySetData *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct __CFDictionary *x6; struct __CFData *x7; struct __CFData *x8; struct __CFData *x9; struct _PCSKeyData *x10; struct __CFData *x11; struct _PCSKeyData *x12; struct __CFDictionary *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x0; struct PCSTypeValue *x1; } x16; struct _PCSPublicIdentityData *x17; struct _PCSPublicIdentityData *x18; struct _PCSPublicIdentityData *x19; struct _PCSPublicIdentityData *x20; struct _PCSIdentityData *x21; struct _PCSIdentityData *x22; unsigned int x23; int x24; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } x25; unsigned int x26; } *shareProtection;

- (void)dealloc;
- (id)exportAcceptedSharingRequestWithError:(id *)a0;
- (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct _PCSIdentitySetData *x1; struct _PCSIdentitySetData *x2; struct _PCSIdentitySetData *x3; struct __CFDictionary *x4; struct __CFArray *x5; struct __CFDictionary *x6; struct __CFData *x7; struct __CFData *x8; struct __CFData *x9; struct _PCSKeyData *x10; struct __CFData *x11; struct _PCSKeyData *x12; struct __CFDictionary *x13; unsigned int x14; unsigned int x15; struct PCSAttributes { unsigned int x0; struct PCSTypeValue *x1; } x16; struct _PCSPublicIdentityData *x17; struct _PCSPublicIdentityData *x18; struct _PCSPublicIdentityData *x19; struct _PCSPublicIdentityData *x20; struct _PCSIdentityData *x21; struct _PCSIdentityData *x22; unsigned int x23; int x24; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; } x25; unsigned int x26; } *)a0;
- (id)initWithSharingRequestData:(id)a0 identitySet:(struct _PCSIdentitySetData { } *)a1 error:(id *)a2;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 error:(id *)a1;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData { } *)a0 owner:(void *)a1 flags:(unsigned int)a2 error:(id *)a3;

@end
