@class TSUCustomFormat, NSString, NSUUID;

@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject> {
    NSUUID *_customFormatListKey;
    unsigned int _formatType;
}

@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) long long numberOfDecimalPlaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataFormatterWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2;

- (void).cxx_destruct;
- (unsigned int)formatType;
- (BOOL)isCompatibleWithDataFormatter:(id)a0;
- (id)convertToPersistableStyleObject;
- (id)chartFormattedInspectorStringForValue:(id)a0 locale:(id)a1;
- (id)chartFormattedStringForValue:(id)a0 locale:(id)a1;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)a0;
- (id)initWithCustomFormat:(id)a0 customFormatListKey:(id)a1 formatType:(unsigned int)a2;
- (id)p_stringForValue:(id)a0 locale:(id)a1;

@end
