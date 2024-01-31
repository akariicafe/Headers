@class NSMutableDictionary;

@interface XRCapabilityRegistry : NSObject <NSMutableCopying, NSCopying> {
    NSMutableDictionary *_capabilityRanges;
    NSMutableDictionary *_unimplementedRecoveries;
    NSMutableDictionary *_abandonedRecoveries;
}

+ (void)initialize;
+ (id)applicationCapabilities;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abandonedRecoveryForCapability:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })supportedVersionsForCapability:(id)a0;
- (id)initWithRanges:(id)a0 unimplementedRecoveries:(id)a1 abandonedRecoveries:(id)a2;
- (void)registerCapability:(id)a0 versions:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAbandonedRecoverySuggestion:(id)a0 forCapability:(id)a1;
- (void)setUnimplementedRecoverySuggestion:(id)a0 forCapability:(id)a1;
- (unsigned long long)supportForCapability:(id)a0 versions:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)unimplementedRecoveryForCapability:(id)a0;

@end
