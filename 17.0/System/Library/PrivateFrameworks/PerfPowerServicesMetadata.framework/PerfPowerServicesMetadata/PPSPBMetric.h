@class PPSPBMetricType, NSString, PPSPBUnit, PPSPBGroupingDimensions, PPSPBEnumMapping, PPSPBRounding, PPSPBCadence, PPSPBSource;

@interface PPSPBMetric : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char datatype : 1; unsigned char deviceCapability : 1; unsigned char directionality : 1; unsigned char enabledPopulation : 1; unsigned char mode : 1; unsigned char obfuscation : 1; unsigned char privacyClassification : 1; unsigned char storage : 1; unsigned char timeToLive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSubsystem;
@property (retain, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) double version;
@property (nonatomic) BOOL hasDatatype;
@property (nonatomic) int datatype;
@property (readonly, nonatomic) BOOL hasUnit;
@property (retain, nonatomic) PPSPBUnit *unit;
@property (readonly, nonatomic) BOOL hasCadence;
@property (retain, nonatomic) PPSPBCadence *cadence;
@property (nonatomic) BOOL hasDirectionality;
@property (nonatomic) int directionality;
@property (nonatomic) BOOL hasStorage;
@property (nonatomic) int storage;
@property (nonatomic) BOOL hasTimeToLive;
@property (nonatomic) unsigned int timeToLive;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) PPSPBSource *source;
@property (nonatomic) BOOL hasDeviceCapability;
@property (nonatomic) int deviceCapability;
@property (nonatomic) BOOL hasEnabledPopulation;
@property (nonatomic) int enabledPopulation;
@property (readonly, nonatomic) BOOL hasRounding;
@property (retain, nonatomic) PPSPBRounding *rounding;
@property (nonatomic) BOOL hasObfuscation;
@property (nonatomic) int obfuscation;
@property (readonly, nonatomic) BOOL hasMetricDescription;
@property (retain, nonatomic) NSString *metricDescription;
@property (readonly, nonatomic) BOOL hasExampleValue;
@property (retain, nonatomic) NSString *exampleValue;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPrivacyClassification;
@property (nonatomic) int privacyClassification;
@property (readonly, nonatomic) BOOL hasEnumMapping;
@property (retain, nonatomic) PPSPBEnumMapping *enumMapping;
@property (readonly, nonatomic) BOOL hasGroupBy;
@property (retain, nonatomic) PPSPBGroupingDimensions *groupBy;
@property (readonly, nonatomic) BOOL hasMetricType;
@property (retain, nonatomic) PPSPBMetricType *metricType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
