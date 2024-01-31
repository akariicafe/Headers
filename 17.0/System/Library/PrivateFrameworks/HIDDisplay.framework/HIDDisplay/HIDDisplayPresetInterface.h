@class NSArray, NSDictionary;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) NSArray *presets;

- (id)capabilities;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (void)createPresets;
- (long long)getActivePresetIndex:(id *)a0;
- (long long)getCurrentPresetIndex:(id *)a0;
- (long long)getFactoryDefaultPresetIndex:(id *)a0;
- (id)getHIDDevices;
- (id)getHIDElementForUsage:(long long)a0;
- (id)initWithMatching:(id)a0;
- (BOOL)setActivePresetIndex:(long long)a0 error:(id *)a1;
- (BOOL)setCurrentPresetIndex:(long long)a0 error:(id *)a1;
- (BOOL)setupPresets;

@end
