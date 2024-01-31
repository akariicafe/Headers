@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *friends;

+ (Class)friendType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearFriends;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)friendsCount;
- (id)friendAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addFriend:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
