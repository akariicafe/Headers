@class NSString, NSNumber, NSSet;

@interface TSCHMutableTimeBasedFormat : TSCHTimeBasedFormat <TSCHCustomFormatUpdateSupport, TSUMutableDurationFormatInspectorPropertyVendor, TSUMutableDateTimeFormatInspectorPropertyVendor>

@property (copy, nonatomic) NSString *dateTimeFormatString;
@property (nonatomic) BOOL durationUnitsAutomaticValue;
@property (nonatomic) unsigned char durationUnitSmallestValue;
@property (nonatomic) unsigned char durationUnitLargestValue;
@property (nonatomic) unsigned char durationStyleValue;
@property (copy, nonatomic) NSString *dateFormat;
@property (copy, nonatomic) NSString *timeFormat;
@property (copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property (copy, nonatomic) NSNumber *durationUnitSmallest;
@property (copy, nonatomic) NSNumber *durationUnitLargest;
@property (copy, nonatomic) NSNumber *durationStyle;
@property (readonly, copy, nonatomic) NSSet *selectedDurationStyles;
@property (readonly, copy, nonatomic) NSSet *selectedDateFormats;
@property (readonly, copy, nonatomic) NSSet *selectedTimeFormats;

- (void)setDateFormat:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimeFormat:(id)a0;
- (void)setDurationUnitsAutomaticValue:(BOOL)a0;
- (void)p_setDateFormat:(id)a0 timeFormat:(id)a1;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)a0;
- (void)setDateTimeFormatString:(id)a0;
- (void)setDurationStyle:(id)a0;
- (void)setDurationStyleValue:(unsigned char)a0;
- (void)setDurationUnitLargest:(id)a0;
- (void)setDurationUnitLargestValue:(unsigned char)a0;
- (void)setDurationUnitSmallest:(id)a0;
- (void)setDurationUnitSmallestValue:(unsigned char)a0;
- (void)setDurationUnitsAutomatic:(id)a0;
- (void)updateAfterPasteForDocumentRoot:(id)a0 pasteboardCustomFormatList:(id)a1;
- (void)updateCustomFormatKey:(id)a0;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)a0;

@end
