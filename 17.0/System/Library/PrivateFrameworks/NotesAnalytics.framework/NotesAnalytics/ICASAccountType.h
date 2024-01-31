@interface ICASAccountType : NSObject <AADataType>

@property (readonly, nonatomic) long long accountType;

- (id)initWithAccountType:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
