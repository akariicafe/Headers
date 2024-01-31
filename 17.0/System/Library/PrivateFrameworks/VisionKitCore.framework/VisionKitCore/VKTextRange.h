@class NSIndexSet, NSArray, VKTextPosition;

@interface VKTextRange : VKBaseTextRange <NSCopying>

@property (class, readonly, nonatomic) VKTextRange *emptyRange;

@property (retain, nonatomic) NSIndexSet *indexSet;
@property (nonatomic) long long emptyIndex;
@property (retain, nonatomic) NSArray *rangeArray;
@property (retain, nonatomic) NSArray *nsRangeArray;
@property (readonly, nonatomic) VKTextPosition *start;
@property (readonly, nonatomic) VKTextPosition *end;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } nsRange;
@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isNSNotFound;
@property (readonly, nonatomic) BOOL containsMultipleRanges;
@property (readonly, nonatomic) unsigned long long startOffset;
@property (readonly, nonatomic) unsigned long long endOffset;
@property (readonly, nonatomic) unsigned long long totalLength;
@property (readonly, nonatomic) unsigned long long length;

+ (id)rangeWithNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)rangeWithVKRanges:(id)a0;
+ (id)defaultRange;
+ (id)rangeWithNSRanges:(id)a0;
+ (id)rangeWithStartOffset:(unsigned long long)a0 endOffset:(unsigned long long)a1;
+ (id)emptyRangeWithPosition:(id)a0;
+ (id)emptyRangeWithOffset:(unsigned long long)a0;
+ (id)rangeWithStart:(id)a0 end:(id)a1;

- (id)summaryDescription;
- (unsigned long long)hash;
- (id)initWithStart:(id)a0 end:(id)a1;
- (id)description;
- (id)initWithIndexSet:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)intersectsNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithStartOffset:(unsigned long long)a0 endOffset:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsTextPosition:(id)a0;

@end
