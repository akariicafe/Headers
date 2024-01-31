@class NSString, NSUUID;

@interface SBSInCallPresentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double preferredBannerHeight;
@property (nonatomic) long long preferredPresentationMode;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier;
@property (nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (readonly, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL supportsSystemAperture;
@property (nonatomic) BOOL shouldPreventBannersWhenPresentedAsOverlay;
@property (nonatomic) BOOL supportsAmbient;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithSceneBundleIdentifier:(id)a0;

@end
