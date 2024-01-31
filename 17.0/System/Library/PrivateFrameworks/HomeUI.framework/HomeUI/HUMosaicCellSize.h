@interface HUMosaicCellSize : NSObject

@property (nonatomic) unsigned long long sizeDescription;
@property (nonatomic) unsigned long long numRows;
@property (nonatomic) unsigned long long numCols;

+ (id)createMosaicCellSizeForSizeDescription:(unsigned long long)a0;

@end
