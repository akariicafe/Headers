@class NSUserDefaults;

@interface HTDeveloperSettings : NSObject {
    NSUserDefaults *_defaults;
    NSUserDefaults *_savedSettingsDefaults;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long hangTracerThreshold;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaults:(id)a0 savedSettingsDefaults:(id)a1;

@end
