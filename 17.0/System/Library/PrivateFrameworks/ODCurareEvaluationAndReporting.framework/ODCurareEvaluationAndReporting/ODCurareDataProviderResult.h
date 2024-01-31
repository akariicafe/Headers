@class NSArray, NSDictionary;

@interface ODCurareDataProviderResult : NSObject

@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSArray *batchProviders;
@property (retain, nonatomic) NSArray *dateArray;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithBatchProviders:(id)a0 dateArray:(id)a1;
- (id)initWithDataArray:(id)a0 dateArray:(id)a1;

@end
