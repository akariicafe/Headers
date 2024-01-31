@class NSArray, _INPBMessage, NSString;

@interface _INPBSendMessageIntentResponse : PBCodable <_INPBSendMessageIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBMessage *sentMessage;
@property (readonly, nonatomic) BOOL hasSentMessage;
@property (copy, nonatomic) NSArray *sentMessages;
@property (readonly, nonatomic) unsigned long long sentMessagesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sentMessagesType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSentMessages:(id)a0;
- (void)clearSentMessages;
- (id)sentMessagesAtIndex:(unsigned long long)a0;

@end
