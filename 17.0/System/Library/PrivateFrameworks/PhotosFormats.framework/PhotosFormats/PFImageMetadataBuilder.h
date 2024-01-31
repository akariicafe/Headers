@class NSDictionary, NSMutableDictionary;

@interface PFImageMetadataBuilder : PFMetadataBuilder

@property (retain, nonatomic) NSMutableDictionary *iptcMutableDictionary;
@property (retain, nonatomic) NSMutableDictionary *exifMutableDictionary;
@property (retain, nonatomic) NSMutableDictionary *tiffMutableDictionary;
@property (readonly, copy, nonatomic) NSDictionary *iptcDictionary;
@property (readonly, copy, nonatomic) NSDictionary *exifDictionary;
@property (readonly, copy, nonatomic) NSDictionary *tiffDictionary;

+ (id)_dateFormatterTemplate;
+ (id)_exifDateTimeFormatter;
+ (id)_exifSubsecTimeFormatter;
+ (id)_exifTimeZoneOffsetFormatter;
+ (id)_gpsDateFormatter;
+ (id)_gpsTimeFormatter;
+ (id)iptcDateFormatter;
+ (id)iptcTimeFormatter;

- (id)init;
- (void)setKeywords:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setCaption:(id)a0;
- (void)setPeopleNames:(id)a0;
- (void)setAccessibilityDescription:(id)a0;
- (void)_updateCreationDate;
- (void)setCreationDate:(id)a0 timeZone:(id)a1;

@end
