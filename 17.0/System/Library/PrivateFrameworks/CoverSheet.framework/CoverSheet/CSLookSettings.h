@class NSString;

@interface CSLookSettings : PTSettings

@property (nonatomic) BOOL useSettingsDateTime;
@property (nonatomic) BOOL customizesDateTime;
@property (nonatomic) BOOL subtitleAboveTime;
@property (nonatomic) double timeFontSize;
@property (nonatomic) double timeFontWeight;
@property (nonatomic) NSString *timeFontDesign;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)customTimeFont;

@end
