@class NSNumber;

@interface MTRReadParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricFiltered;
@property (nonatomic, getter=shouldFilterByFabric) BOOL filterByFabric;
@property (copy, nonatomic) NSNumber *minEventNumber;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)toReadPrepareParams:(void *)a0;

@end
