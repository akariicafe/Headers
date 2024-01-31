@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {
    NSMutableDictionary *_presetsByFamily;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)defaultPresetsForFamily:(id)a0;
- (id)presetForUniqueIdentifier:(id)a0;
- (id)presetsForFamily:(id)a0;
- (id)_defaultPresetsByName;
- (id)_presetsByNameForFamily:(id)a0;
- (id)defaultPresets;
- (id)presetWithUniqueIdentifier:(id)a0;

@end
