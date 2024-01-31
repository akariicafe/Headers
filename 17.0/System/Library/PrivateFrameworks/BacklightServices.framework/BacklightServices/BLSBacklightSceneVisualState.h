@class NSString;

@interface BLSBacklightSceneVisualState : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long activeAppearance;
@property (readonly, nonatomic) long long updateFidelity;
@property (readonly, nonatomic) long long adjustedLuminance;
@property (readonly, nonatomic, getter=isDimmed) BOOL dimmed;
@property (readonly, nonatomic) long long grantedFidelity;
@property (readonly, nonatomic) long long expectedFidelity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)initWithActiveAppearance:(long long)a0 updateFidelity:(long long)a1 adjustedLuminance:(long long)a2;
- (BOOL)isEssentiallyEqualToVisualState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActiveAppearance:(long long)a0 updateFidelity:(long long)a1 adjustedLuminance:(long long)a2 dimmed:(BOOL)a3;
- (id)initWithXPCDictionary:(id)a0;
- (id)newVisualStateWithUpdateFidelity:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
