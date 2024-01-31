@class NSString;

@interface WFPBShowDialogEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasDialogType;
@property (retain, nonatomic) NSString *dialogType;
@property (readonly, nonatomic) BOOL hasPresentationStyle;
@property (retain, nonatomic) NSString *presentationStyle;
@property (readonly, nonatomic) BOOL hasDismissalType;
@property (retain, nonatomic) NSString *dismissalType;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;

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
