@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)init;
- (id)triggeringBundleIdentifiers;
- (id)description;
- (void).cxx_destruct;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;

@end
