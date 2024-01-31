@class NSIndexSet;

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long seriesIndex;
@property (readonly, nonatomic) unsigned long long valueIndex;
@property (readonly, nonatomic) NSIndexSet *seriesIndexSet;
@property (readonly, nonatomic) NSIndexSet *valueIndexSet;

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)a0 valueIndex:(unsigned long long)a1;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSeriesIndex:(unsigned long long)a0 valueIndex:(unsigned long long)a1;

@end
