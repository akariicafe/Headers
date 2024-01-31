@class PUTilingDataSource, NSIndexPath;

@interface PUTilingViewUpdateItem : NSObject

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) PUTilingDataSource *dataSource;

- (void).cxx_destruct;
- (id)initWithAction:(long long)a0 indexPathBeforeUpdate:(id)a1 indexPathAfterUpdate:(id)a2 dataSource:(id)a3;
- (id)transformedIndexPath:(id)a0 withDataSource:(id)a1;

@end
