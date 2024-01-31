@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject {
    NSMutableArray *_data;
}

@property (retain, nonatomic) NSArray *header;
@property (readonly, nonatomic) unsigned long long rowsCount;
@property (nonatomic) BOOL sortable;

- (id)init;
- (void).cxx_destruct;
- (id)rowAtIndex:(unsigned long long)a0;
- (void)addRow:(id)a0;

@end
