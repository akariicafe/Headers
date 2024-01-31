@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem

@property (weak, nonatomic, setter=_setParentItem:) TKTonePickerItem *parentItem;
@property (nonatomic, setter=_setClassicToneIndex:) long long classicToneIndex;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)a0;
- (id)childItemAtIndex:(long long)a0;

@end
