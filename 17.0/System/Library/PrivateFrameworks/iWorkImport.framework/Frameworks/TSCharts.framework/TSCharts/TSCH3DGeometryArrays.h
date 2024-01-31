@interface TSCH3DGeometryArrays : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int offset;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int capoffset;
@property (readonly, nonatomic) unsigned int capcount;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) struct range<unsigned int> { unsigned int x0; unsigned int x1; } emptyRange;
@property (readonly, nonatomic) struct range<unsigned int> { unsigned int x0; unsigned int x1; } wholeRange;
@property (readonly, nonatomic) struct range<unsigned int> { unsigned int x0; unsigned int x1; } range;
@property (readonly, nonatomic) struct range<unsigned int> { unsigned int x0; unsigned int x1; } capRange;

+ (id)arraysWithOffset:(unsigned int)a0 count:(unsigned int)a1 capoffset:(unsigned int)a2 capcount:(unsigned int)a3;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOffset:(unsigned int)a0 count:(unsigned int)a1 capoffset:(unsigned int)a2 capcount:(unsigned int)a3;

@end
