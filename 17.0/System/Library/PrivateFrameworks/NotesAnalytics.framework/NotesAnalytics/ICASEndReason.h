@interface ICASEndReason : NSObject <AADataType>

@property (readonly, nonatomic) long long endReason;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithEndReason:(long long)a0;

@end
