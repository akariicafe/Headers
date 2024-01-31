@interface ICASDocScanStage : NSObject <AADataType>

@property (readonly, nonatomic) long long docScanStage;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithDocScanStage:(long long)a0;

@end
