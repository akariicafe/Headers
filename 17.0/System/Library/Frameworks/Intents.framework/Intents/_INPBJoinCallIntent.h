@class NSString, _INPBCallGroupConversation, _INPBCallGroupConversationFilter, _INPBIntentMetadata;

@interface _INPBJoinCallIntent : PBCodable <_INPBJoinCallIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBCallGroupConversation *groupConversation;
@property (readonly, nonatomic) BOOL hasGroupConversation;
@property (retain, nonatomic) _INPBCallGroupConversationFilter *groupConversationFilter;
@property (readonly, nonatomic) BOOL hasGroupConversationFilter;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
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

@end
