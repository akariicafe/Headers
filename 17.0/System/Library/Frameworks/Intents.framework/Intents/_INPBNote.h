@class NSString, NSArray, _INPBDateTime, _INPBDataString;

@interface _INPBNote : PBCodable <_INPBNote, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) unsigned long long contentsCount;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contentType;

- (void)clearContents;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentAtIndex:(unsigned long long)a0;
- (void)addContent:(id)a0;

@end
