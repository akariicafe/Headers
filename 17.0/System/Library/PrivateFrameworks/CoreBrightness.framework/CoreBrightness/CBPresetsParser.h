@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CBPresetsParser : NSObject {
    NSArray *_displayList;
    NSMutableDictionary *_displayPresets;
    NSObject<OS_os_log> *_logHandle;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setDisplayList:(id)a0;
- (BOOL)autoBrightnessDisabledForDisplay:(unsigned long long)a0;
- (BOOL)brightnessDisabledForDisplay:(unsigned long long)a0;
- (BOOL)nightShiftDisabled;
- (BOOL)referenceMode:(unsigned long long)a0;
- (void)refreshPresetState;
- (BOOL)trueToneDisabled;

@end
