@class _ICLLQueryMessage, NSString, _ICLLCommandMessage, _ICLLActionMessage, _ICLLErrorMessage;

@interface _ICLLProtocolMessage : PBCodable <NSCopying> {
    _ICLLActionMessage *_action;
    _ICLLCommandMessage *_command;
    _ICLLErrorMessage *_error;
    _ICLLQueryMessage *_query;
    NSString *_traceId;
    int _type;
    struct { unsigned char type : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
