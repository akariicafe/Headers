@class _INPBMessageReaction, NSString, NSArray, _INPBMessageLinkMetadata, _INPBLocation, _INPBDateTime, _INPBInteger, _INPBFile, _INPBContact, _INPBDataString, _INPBCurrencyAmountValue;

@interface _INPBMessage : PBCodable <_INPBMessage, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _attributes;
    struct { unsigned char effect : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *attachmentFiles;
@property (readonly, nonatomic) unsigned long long attachmentFilesCount;
@property (readonly, nonatomic) int *attributes;
@property (readonly, nonatomic) unsigned long long attributesCount;
@property (retain, nonatomic) _INPBFile *audioMessageFile;
@property (readonly, nonatomic) BOOL hasAudioMessageFile;
@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) BOOL hasConversationIdentifier;
@property (retain, nonatomic) _INPBDateTime *dateLastMessageRead;
@property (readonly, nonatomic) BOOL hasDateLastMessageRead;
@property (retain, nonatomic) _INPBDateTime *dateSent;
@property (readonly, nonatomic) BOOL hasDateSent;
@property (nonatomic) int effect;
@property (nonatomic) BOOL hasEffect;
@property (copy, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) BOOL hasFileExtension;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBMessageLinkMetadata *linkMetadata;
@property (readonly, nonatomic) BOOL hasLinkMetadata;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSString *locationName;
@property (readonly, nonatomic) BOOL hasLocationName;
@property (retain, nonatomic) _INPBInteger *numberOfAttachments;
@property (readonly, nonatomic) BOOL hasNumberOfAttachments;
@property (retain, nonatomic) _INPBCurrencyAmountValue *paymentAmount;
@property (readonly, nonatomic) BOOL hasPaymentAmount;
@property (retain, nonatomic) _INPBMessageReaction *reaction;
@property (readonly, nonatomic) BOOL hasReaction;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (retain, nonatomic) _INPBMessage *referencedMessage;
@property (readonly, nonatomic) BOOL hasReferencedMessage;
@property (retain, nonatomic) _INPBContact *sender;
@property (readonly, nonatomic) BOOL hasSender;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) _INPBDataString *speakableGroupName;
@property (readonly, nonatomic) BOOL hasSpeakableGroupName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientType;
+ (Class)attachmentFileType;

- (void)clearAttributes;
- (void)dealloc;
- (id)typeAsString:(int)a0;
- (id)recipientAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addRecipient:(id)a0;
- (void)clearRecipients;
- (void)encodeWithCoder:(id)a0;
- (int)attributeAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addAttribute:(int)a0;
- (int)StringAsEffect:(id)a0;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)effectAsString:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAttributes:(id)a0;
- (id)attributesAsString:(int)a0;
- (void)setAttributes:(int *)a0 count:(unsigned long long)a1;
- (void)addAttachmentFile:(id)a0;
- (id)attachmentFileAtIndex:(unsigned long long)a0;
- (void)clearAttachmentFiles;

@end
