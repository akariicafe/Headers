@class NSString, PRSPosterConfiguration;

@interface PRSActivePosterConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRSPosterConfiguration *lockScreenPosterConfiguration;
@property (readonly, nonatomic) PRSPosterConfiguration *homeScreenPosterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithLockScreenPosterConfiguration:(id)a0 homeScreenPosterConfiguration:(id)a1;
- (id)initWithCoder:(id)a0;

@end
