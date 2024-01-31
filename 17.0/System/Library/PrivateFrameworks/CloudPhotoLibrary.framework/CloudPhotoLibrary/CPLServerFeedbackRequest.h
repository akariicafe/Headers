@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *messages;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addMessages:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearMessages;
- (unsigned long long)messagesCount;
- (id)messagesAtIndex:(unsigned long long)a0;

@end
