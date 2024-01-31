@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}

- (BOOL)isDefault;
- (id)init;
- (id)pluginIdentifier;
- (void)dealloc;
- (id)backgroundColor;
- (id)localizedName;
- (id)uniqueIdentifier;
- (id)family;
- (BOOL)isAvailable;
- (BOOL)isLocal;
- (id)audioURLs;
- (id)guidelines;
- (BOOL)supportsSettingType:(unsigned long long)a0;
- (id)_settingKeyForType:(unsigned long long)a0;
- (id)initWithFamily:(id)a0 andPluginIdentifier:(id)a1;
- (id)initWithFamily:(id)a0 name:(id)a1 andDictionary:(id)a2;

@end
