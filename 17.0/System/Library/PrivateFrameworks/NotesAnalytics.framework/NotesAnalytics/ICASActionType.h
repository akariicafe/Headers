@interface ICASActionType : NSObject <AADataType>

@property (readonly, nonatomic) long long actionType;

- (id)initWithActionType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
