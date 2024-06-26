@class NSString, NSMutableArray;

@interface PPPBContactNameRecord : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char changeType : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) unsigned char source;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) unsigned char changeType;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (retain, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (retain, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) BOOL hasJobTitle;
@property (retain, nonatomic) NSString *jobTitle;
@property (readonly, nonatomic) BOOL hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *relatedNames;
@property (retain, nonatomic) NSMutableArray *streetNames;
@property (retain, nonatomic) NSMutableArray *cityNames;

+ (Class)streetNamesType;
+ (Class)cityNamesType;
+ (Class)relatedNamesType;

- (unsigned char)StringAsSource:(id)a0;
- (id)sourceAsString:(unsigned char)a0;
- (unsigned long long)hash;
- (void)addRelatedNames:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)relatedNamesCount;
- (void)writeTo:(id)a0;
- (unsigned char)StringAsChangeType:(id)a0;
- (id)description;
- (id)changeTypeAsString:(unsigned char)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearRelatedNames;
- (id)relatedNamesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addStreetNames:(id)a0;
- (void)addCityNames:(id)a0;
- (id)cityNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)cityNamesCount;
- (void)clearCityNames;
- (void)clearStreetNames;
- (id)streetNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)streetNamesCount;

@end
