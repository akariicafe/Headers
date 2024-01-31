@class NSArray, NSString, _INPBString, _INPBIntentMetadata;

@interface _INPBOpenFileIntent : PBCodable <_INPBOpenFileIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; unsigned char scope : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *appId;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;
@property (nonatomic) int scope;
@property (nonatomic) BOOL hasScope;
@property (retain, nonatomic) _INPBString *scopeEntityName;
@property (readonly, nonatomic) BOOL hasScopeEntityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)propertiesType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsEntityType:(id)a0;
- (int)StringAsScope:(id)a0;
- (void)clearProperties;
- (void)addProperties:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)scopeAsString:(int)a0;

@end
