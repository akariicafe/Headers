@interface ICASSessionDetailType : NSObject <AADataType>

@property (readonly, nonatomic) long long sessionDetailType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSessionDetailType:(long long)a0;

@end
