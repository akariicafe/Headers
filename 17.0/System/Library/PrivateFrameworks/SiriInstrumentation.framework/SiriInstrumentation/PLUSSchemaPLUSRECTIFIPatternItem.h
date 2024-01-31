@class NSString, NSData;

@interface PLUSSchemaPLUSRECTIFIPatternItem : SISchemaInstrumentationMessage {
    struct { unsigned char itemSource : 1; unsigned char itemType : 1; unsigned char relativeTimestampInMs : 1; } _has;
}

@property (nonatomic) int itemSource;
@property (nonatomic) BOOL hasItemSource;
@property (nonatomic) int itemType;
@property (nonatomic) BOOL hasItemType;
@property (nonatomic) unsigned long long relativeTimestampInMs;
@property (nonatomic) BOOL hasRelativeTimestampInMs;
@property (copy, nonatomic) NSString *cdmMatchingSpanLabel;
@property (nonatomic) BOOL hasCdmMatchingSpanLabel;
@property (copy, nonatomic) NSString *uufrSaidDialogIdentifier;
@property (nonatomic) BOOL hasUufrSaidDialogIdentifier;
@property (copy, nonatomic) NSString *itemDomainName;
@property (nonatomic) BOOL hasItemDomainName;
@property (copy, nonatomic) NSString *itemPayload;
@property (nonatomic) BOOL hasItemPayload;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPatternitemcontent;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCdmMatchingSpanLabel;
- (void)deleteItemDomainName;
- (void)deleteItemPayload;
- (void)deleteItemSource;
- (void)deleteItemType;
- (void)deleteRelativeTimestampInMs;
- (void)deleteUufrSaidDialogIdentifier;

@end
