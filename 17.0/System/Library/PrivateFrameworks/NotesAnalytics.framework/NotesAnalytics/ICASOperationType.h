@interface ICASOperationType : NSObject <AADataType>

@property (readonly, nonatomic) long long operationType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithOperationType:(long long)a0;

@end
