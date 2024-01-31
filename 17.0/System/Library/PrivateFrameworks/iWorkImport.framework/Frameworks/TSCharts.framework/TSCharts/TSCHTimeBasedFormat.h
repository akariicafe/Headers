@class NSString, NSUUID, NSSet, TSKFormat, NSNumber;

@interface TSCHTimeBasedFormat : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport, TSCHCustomFormatSupport, NSCopying, NSMutableCopying, TSUDurationFormatInspectorPropertyVendor, TSUDateTimeFormatInspectorPropertyVendor>

@property (readonly, nonatomic) long long numberOfDecimalPlaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) BOOL isCustom;
@property (readonly, copy, nonatomic) NSUUID *customFormatListKey;
@property (readonly, copy, nonatomic) TSKFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int formatType;
@property (copy, nonatomic) TSKFormat *format;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) BOOL isDate;
@property (readonly, nonatomic) BOOL isDuration;
@property (readonly, copy, nonatomic) NSString *dateTimeFormatString;
@property (readonly, nonatomic) BOOL durationUnitsAutomaticValue;
@property (readonly, nonatomic) unsigned char durationUnitSmallestValue;
@property (readonly, nonatomic) unsigned char durationUnitLargestValue;
@property (readonly, nonatomic) unsigned char durationStyleValue;
@property (readonly, nonatomic) unsigned char durationUnits;
@property (readonly, copy, nonatomic) NSString *dateFormat;
@property (readonly, copy, nonatomic) NSString *timeFormat;
@property (readonly, copy, nonatomic) NSNumber *durationUnitsAutomatic;
@property (readonly, copy, nonatomic) NSNumber *durationUnitSmallest;
@property (readonly, copy, nonatomic) NSNumber *durationUnitLargest;
@property (readonly, copy, nonatomic) NSNumber *durationStyle;
@property (readonly, copy, nonatomic) NSSet *selectedDurationStyles;
@property (readonly, copy, nonatomic) NSSet *selectedDateFormats;
@property (readonly, copy, nonatomic) NSSet *selectedTimeFormats;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (BOOL)supportsFormatType:(unsigned int)a0;
+ (id)defaultDateFormat:(id)a0;
+ (id)defaultDurationFormat:(id)a0;
+ (id)timeBasedFormatWithTSKFormat:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)durationFormat;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)dataFormatterForDocumentRoot:(id)a0;
- (id)initWithTSKFormat:(id)a0;
- (BOOL)isCompatibleWithDataFormatter:(id)a0;
- (id)customFormatKey;
- (id)customFormat;
- (id)convertToPersistableStyleObject;
- (id)chartFormattedInspectorStringForValue:(id)a0 locale:(id)a1;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)dateTimeFormat;

@end
