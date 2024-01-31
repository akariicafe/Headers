@interface STUIStatusBarVoiceControlItem : STUIStatusBarIndicatorItem

+ (id)pillCombinedDisplayIdentifier;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)_overriddenStyleAttributesForVoiceControlType:(long long)a0;
- (id)overriddenStyleAttributesForData:(id)a0 identifier:(id)a1;
- (id)imageNameForUpdate:(id)a0;
- (id)indicatorEntryKey;
- (double)imageOpacityForVoiceControlType:(long long)a0;

@end
