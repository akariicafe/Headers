@class NSString;

@interface SBSStatusBarBackgroundActivityTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext, SBSStatusBarBackgroundActivityTapContext>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *backgroundActivityIdentifier;
@property (nonatomic) unsigned long long styleOverride;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBackgroundActivityIdentifier:(id)a0;

@end
