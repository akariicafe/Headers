@class NSString, NSDictionary;

@interface DTTapStatusMemo : DTTapMemo

@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSDictionary *info;

- (void).cxx_destruct;
- (id)initWithStatus:(unsigned int)a0 notice:(id)a1;
- (id)initWithStatus:(unsigned int)a0 notice:(id)a1 info:(id)a2;
- (id)initWithStatus:(unsigned int)a0 notice:(id)a1 info:(id)a2 timestamp:(unsigned long long)a3;

@end
