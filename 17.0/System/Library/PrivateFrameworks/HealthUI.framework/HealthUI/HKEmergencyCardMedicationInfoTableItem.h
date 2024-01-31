@interface HKEmergencyCardMedicationInfoTableItem : HKEmergencyCardMultilineTextTableItem

- (id)_placeholderText;
- (id)title;
- (void)_configureEditableCell:(id)a0;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)a0;
- (BOOL)hasPresentableData;

@end
