@class NSArray, NSString;

@interface _INPBPayloadNeedsDisambiguation : PBCodable <_INPBPayloadNeedsDisambiguation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *disambiguationItems;
@property (readonly, nonatomic) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)disambiguationItemsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDisambiguationItems:(id)a0;
- (void)clearDisambiguationItems;
- (id)disambiguationItemsAtIndex:(unsigned long long)a0;

@end
