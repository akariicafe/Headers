@class NSString, _INPBMessage;

@interface _INPBMessageReaction : PBCodable <_INPBMessageReaction, NSSecureCoding, NSCopying> {
    struct { unsigned char reactionType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reactionDescription;
@property (readonly, nonatomic) BOOL hasReactionDescription;
@property (nonatomic) int reactionType;
@property (nonatomic) BOOL hasReactionType;
@property (retain, nonatomic) _INPBMessage *referencedMessage;
@property (readonly, nonatomic) BOOL hasReferencedMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReactionType:(id)a0;
- (id)reactionTypeAsString:(int)a0;

@end
