@class NSMutableArray;

@interface MXChoiceAlignment : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _postItnChoiceIndices;
}

@property (readonly, nonatomic) unsigned long long postItnChoiceIndicesCount;
@property (readonly, nonatomic) int *postItnChoiceIndices;
@property (retain, nonatomic) NSMutableArray *preItnTokenToPostItnCharAlignments;

+ (Class)preItnTokenToPostItnCharAlignmentsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPostItnChoiceIndices:(int)a0;
- (void)addPreItnTokenToPostItnCharAlignments:(id)a0;
- (void)clearPostItnChoiceIndices;
- (void)clearPreItnTokenToPostItnCharAlignments;
- (int)postItnChoiceIndicesAtIndex:(unsigned long long)a0;
- (id)preItnTokenToPostItnCharAlignmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)preItnTokenToPostItnCharAlignmentsCount;
- (void)setPostItnChoiceIndices:(int *)a0 count:(unsigned long long)a1;

@end
