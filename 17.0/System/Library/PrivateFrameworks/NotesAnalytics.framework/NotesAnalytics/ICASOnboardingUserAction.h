@interface ICASOnboardingUserAction : NSObject <AADataType>

@property (readonly, nonatomic) long long onboardingUserAction;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithOnboardingUserAction:(long long)a0;

@end
