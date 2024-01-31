@interface _UIStatusBarVoiceControlItem : _UIStatusBarIndicatorItem

+ (id)pillCombinedDisplayIdentifier;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)_overriddenStyleAttributesForVoiceControlType:(long long)a0;
- (id)overriddenStyleAttributesForData:(id)a0 identifier:(id)a1;
- (id)indicatorEntryKey;
- (id)imageForUpdate:(id)a0;
- (double)imageOpacityForVoiceControlType:(long long)a0;
- (id)systemImageNameForUpdate:(id)a0;

@end
