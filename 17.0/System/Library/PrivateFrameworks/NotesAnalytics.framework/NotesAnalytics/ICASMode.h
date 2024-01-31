@interface ICASMode : NSObject <AADataType>

@property (readonly, nonatomic) long long mode;

- (id)initWithMode:(long long)a0;
- (id)toJsonValueAndReturnError:(id *)a0;

@end
