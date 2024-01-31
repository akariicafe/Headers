@class NSUUID, NSString, NSData, NSUserActivity;

@interface SBSSystemNotesPresentationConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying> {
    NSData *_userActivityData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) long long preferredPresentationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSceneBundleIdentifier:(id)a0;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1 preferredPresentationMode:(long long)a2;
- (id)initWithSceneBundleIdentifier:(id)a0 userActivity:(id)a1 preferredPresentationMode:(long long)a2 identifier:(id)a3;
- (BOOL)isEqualToSystemNotesPresentationConfiguration:(id)a0;
- (void)prepareForXPCCall:(id /* block */)a0;
- (id)presentationConfigurationWithPreferredPresentationMode:(long long)a0;

@end
