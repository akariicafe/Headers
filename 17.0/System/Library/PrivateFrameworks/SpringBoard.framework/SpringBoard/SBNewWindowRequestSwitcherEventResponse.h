@class NSString;

@interface SBNewWindowRequestSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (long long)type;

@end
