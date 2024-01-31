@class NSArray;

@interface InMemoryRecordSet : NSObject

@property (readonly, nonatomic) NSArray *infos;
@property (readonly, nonatomic) NSArray *datas;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithRecordInfos:(id)a0 recordDatas:(id)a1;

@end
