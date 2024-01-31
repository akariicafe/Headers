@interface ICASOsInstallVariant : NSObject <AADataType>

@property (readonly, nonatomic) long long osInstallVariant;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithOsInstallVariant:(long long)a0;

@end
