@class NSString, NSData, WFREPBError;

@interface WFREPBDialogRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) BOOL hasDialogRequestResponseData;
@property (retain, nonatomic) NSData *dialogRequestResponseData;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
