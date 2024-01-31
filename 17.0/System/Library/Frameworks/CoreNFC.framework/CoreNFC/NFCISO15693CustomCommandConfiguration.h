@class NSData;

@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration

@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long manufacturerCode;
@property (nonatomic) unsigned long long customCommandCode;
@property (copy, nonatomic) NSData *requestParameters;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asNSDataWithError:(id *)a0;
- (id)initWithManufacturerCode:(unsigned long long)a0 customCommandCode:(unsigned long long)a1 requestParameters:(id)a2;
- (id)initWithManufacturerCode:(unsigned long long)a0 customCommandCode:(unsigned long long)a1 requestParameters:(id)a2 maximumRetries:(unsigned long long)a3 retryInterval:(double)a4;

@end
