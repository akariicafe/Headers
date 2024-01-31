@class _SFPBDrillDownMetadata, NSString, NSArray, NSData, _SFPBURL, _SFPBImage, _SFPBColor;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) BOOL flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (retain, nonatomic) _SFPBImage *titleImage;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBDrillDownMetadata *metadata;
@property (retain, nonatomic) _SFPBDrillDownMetadata *drilldownMetadata;
@property (readonly, nonatomic) NSData *jsonData;
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
- (void)addCardSections:(id)a0;
- (id)cardSectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
- (void)addDismissalCommands:(id)a0;
- (void)addEntityProtobufMessages:(id)a0;
- (void)clearDismissalCommands;
- (void)clearEntityProtobufMessages;
- (id)dismissalCommandsAtIndex:(unsigned long long)a0;
- (unsigned long long)dismissalCommandsCount;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)a0;
- (unsigned long long)entityProtobufMessagesCount;

@end
