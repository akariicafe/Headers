@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, NSMutableArray;

@interface CKDPRecordField : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *identifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) CKDPRecordFieldValue *value;
@property (retain, nonatomic) NSMutableArray *actions;

+ (Class)actionType;
+ (id)emptyFieldWithKey:(id)a0;

- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addAction:(id)a0;
- (id)actionAtIndex:(unsigned long long)a0;
- (void)clearActions;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)actionsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
