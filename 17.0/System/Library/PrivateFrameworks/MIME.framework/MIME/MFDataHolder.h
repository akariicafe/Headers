@class NSMutableArray;

@interface MFDataHolder : NSObject {
    NSMutableArray *_datas;
}

@property (readonly, nonatomic) unsigned long long length;

+ (id)dataHolder;
+ (id)dataHolderWithData:(id)a0;

- (id)init;
- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (void)addData:(id)a0;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)a0;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;

@end
