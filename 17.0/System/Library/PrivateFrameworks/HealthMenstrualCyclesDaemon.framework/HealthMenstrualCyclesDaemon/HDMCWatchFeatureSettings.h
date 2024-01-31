@class NSString;

@interface HDMCWatchFeatureSettings : NSObject {
    id /* block */ _changeComputer;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)algorithmicProjectionsSettings;
+ (id)hiddenLoggingRowsSettings;

- (void).cxx_destruct;
- (id)userDefaultsChangesFromFeatureSettings:(id)a0 currentUserDefaults:(id)a1;

@end
