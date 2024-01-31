@class NSString, NSData;

@interface POMMESSchemaPOMMESPegasusQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasLatitude : 1; unsigned char hasLongitude : 1; unsigned char hasCountryCode : 1; unsigned char hasStorefront : 1; unsigned char hasSiriLocale : 1; unsigned char uiScale : 1; unsigned char isNavigationMode : 1; unsigned char temperatureScale : 1; unsigned char measurementSystem : 1; unsigned char installedAppsSignatureLength : 1; unsigned char heySiriEnabled : 1; unsigned char locationAgeInSeconds : 1; unsigned char locationSource : 1; unsigned char locationPreciseStatus : 1; } _has;
}

@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasHasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasHasLongitude;
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasHasCountryCode;
@property (nonatomic) BOOL hasStorefront;
@property (nonatomic) BOOL hasHasStorefront;
@property (nonatomic) BOOL hasSiriLocale;
@property (nonatomic) BOOL hasHasSiriLocale;
@property (nonatomic) float uiScale;
@property (nonatomic) BOOL hasUiScale;
@property (nonatomic) BOOL isNavigationMode;
@property (nonatomic) BOOL hasIsNavigationMode;
@property (nonatomic) int temperatureScale;
@property (nonatomic) BOOL hasTemperatureScale;
@property (nonatomic) int measurementSystem;
@property (nonatomic) BOOL hasMeasurementSystem;
@property (nonatomic) unsigned int installedAppsSignatureLength;
@property (nonatomic) BOOL hasInstalledAppsSignatureLength;
@property (copy, nonatomic) NSString *storefrontValue;
@property (nonatomic) BOOL hasStorefrontValue;
@property (nonatomic) BOOL heySiriEnabled;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (nonatomic) unsigned int locationAgeInSeconds;
@property (nonatomic) BOOL hasLocationAgeInSeconds;
@property (nonatomic) int locationSource;
@property (nonatomic) BOOL hasLocationSource;
@property (nonatomic) int locationPreciseStatus;
@property (nonatomic) BOOL hasLocationPreciseStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasCountryCode;
- (void)deleteHasLatitude;
- (void)deleteHasLongitude;
- (void)deleteHasSiriLocale;
- (void)deleteHasStorefront;
- (void)deleteHeySiriEnabled;
- (void)deleteInstalledAppsSignatureLength;
- (void)deleteIsNavigationMode;
- (void)deleteLocationAgeInSeconds;
- (void)deleteLocationPreciseStatus;
- (void)deleteLocationSource;
- (void)deleteMeasurementSystem;
- (void)deleteStorefrontValue;
- (void)deleteTemperatureScale;
- (void)deleteUiScale;

@end
