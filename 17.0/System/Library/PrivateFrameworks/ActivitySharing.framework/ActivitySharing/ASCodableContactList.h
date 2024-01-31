@class NSMutableArray;

@interface ASCodableContactList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contacts;

+ (Class)contactsType;

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
- (void)addContacts:(id)a0;
- (void)clearContacts;
- (id)contactsAtIndex:(unsigned long long)a0;
- (unsigned long long)contactsCount;

@end
