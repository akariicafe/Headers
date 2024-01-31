@interface ICASDocScanActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long docScanActionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithDocScanActionType:(long long)a0;

@end
