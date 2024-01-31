@class NSError, NSString;

@interface SYLogErrorInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) NSError *cocoaError;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;

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
- (id)initWithCocoaError:(id)a0;

@end
