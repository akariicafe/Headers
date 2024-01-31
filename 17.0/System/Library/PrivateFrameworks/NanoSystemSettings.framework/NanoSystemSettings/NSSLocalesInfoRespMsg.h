@class NSString, NSMutableArray;

@interface NSSLocalesInfoRespMsg : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *systemLanguages;
@property (retain, nonatomic) NSMutableArray *localeIdentifiers;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableArray *supportedCalendars;
@property (retain, nonatomic) NSMutableArray *defaultCalendars;
@property (retain, nonatomic) NSMutableArray *numberingSystems;

+ (Class)defaultCalendarsType;
+ (Class)localeIdentifiersType;
+ (Class)numberingSystemsType;
+ (Class)supportedCalendarsType;
+ (Class)systemLanguagesType;

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
- (void)addDefaultCalendars:(id)a0;
- (void)addLocaleIdentifiers:(id)a0;
- (void)addNumberingSystems:(id)a0;
- (void)addSupportedCalendars:(id)a0;
- (void)addSystemLanguages:(id)a0;
- (void)clearDefaultCalendars;
- (void)clearLocaleIdentifiers;
- (void)clearNumberingSystems;
- (void)clearSupportedCalendars;
- (void)clearSystemLanguages;
- (id)defaultCalendarsAtIndex:(unsigned long long)a0;
- (unsigned long long)defaultCalendarsCount;
- (id)localeIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)localeIdentifiersCount;
- (id)numberingSystemsAtIndex:(unsigned long long)a0;
- (unsigned long long)numberingSystemsCount;
- (id)supportedCalendarsAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedCalendarsCount;
- (id)systemLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)systemLanguagesCount;

@end
