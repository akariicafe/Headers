@interface ICASActionMenuUsageType : NSObject <AADataType>

@property (readonly, nonatomic) long long actionMenuUsageType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithActionMenuUsageType:(long long)a0;

@end
