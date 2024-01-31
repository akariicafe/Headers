@interface ICASStartMode : NSObject <AADataType>

@property (readonly, nonatomic) long long startMode;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithStartMode:(long long)a0;

@end
