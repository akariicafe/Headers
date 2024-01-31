@class CKVDatasetRecord;

@interface CKVDatasetStatistics : NSObject

@property (readonly, nonatomic) CKVDatasetRecord *record;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long minLength;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) unsigned long long sumLength;
@property (readonly, nonatomic) unsigned long long sumQLength;
@property (readonly, nonatomic) double meanLength;
@property (readonly, nonatomic) double stdevLength;

+ (id)builderWithRecord:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRecord:(id)a0 count:(unsigned long long)a1 minLength:(unsigned long long)a2 maxLength:(unsigned long long)a3 sumLength:(unsigned long long)a4 sumQLength:(unsigned long long)a5 meanLength:(double)a6 stdevLength:(double)a7;
- (BOOL)isEqualToDatasetStatistics:(id)a0;

@end
