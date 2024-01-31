@class NSString;

@interface HBXHealthAppPluginUtilities : NSObject {
    long long _configurationOverride;
}

@property (readonly, copy, nonatomic) NSString *systemPath;
@property (readonly, copy, nonatomic) NSString *feedItemPluginsPath;
@property (retain, nonatomic) NSString *simulatorPathOverride;

+ (id)defaultUtilities;

- (void).cxx_destruct;
- (id)_rootPath;
- (BOOL)_isCatalyst;
- (id)_simulatorPath;
- (id)initWithConfigurationOverride:(long long)a0;

@end
