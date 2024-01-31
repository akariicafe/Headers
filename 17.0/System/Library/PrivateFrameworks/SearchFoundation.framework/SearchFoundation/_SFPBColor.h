@class _SFPBCalendarColor, _SFPBImageDerivedColor, NSData, NSString, _SFPBGradientColor, _SFPBAppColor, _SFPBGraphicalFloat, _SFPBWeatherColor;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) _SFPBColor *darkModeColor;
@property (retain, nonatomic) _SFPBCalendarColor *calendarColor;
@property (retain, nonatomic) _SFPBAppColor *appColor;
@property (retain, nonatomic) _SFPBImageDerivedColor *imageDerivedColor;
@property (retain, nonatomic) _SFPBGradientColor *gradientColor;
@property (retain, nonatomic) _SFPBWeatherColor *weatherColor;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
