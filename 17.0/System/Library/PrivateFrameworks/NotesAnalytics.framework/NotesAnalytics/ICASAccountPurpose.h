@interface ICASAccountPurpose : NSObject <AADataType>

@property (readonly, nonatomic) long long accountPurpose;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithAccountPurpose:(long long)a0;

@end
