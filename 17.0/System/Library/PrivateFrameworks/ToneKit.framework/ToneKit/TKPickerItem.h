@interface TKPickerItem : NSObject

@property (nonatomic, setter=_setSection:) long long section;

- (id)description;
- (void)_appendDescriptionOfAttributeNamed:(id)a0 withBoolValue:(BOOL)a1 toString:(id)a2;
- (void)_appendDescriptionOfAttributeNamed:(id)a0 withIntegerValue:(long long)a1 toString:(id)a2;
- (void)_appendDescriptionOfAttributeNamed:(id)a0 withStringValue:(id)a1 toString:(id)a2;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
