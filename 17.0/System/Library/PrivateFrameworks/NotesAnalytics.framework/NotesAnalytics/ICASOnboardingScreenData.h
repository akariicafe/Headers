@class NSString, ICASOnboardingScreenType, ICASOnboardingUserAction;

@interface ICASOnboardingScreenData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASOnboardingScreenType *onboardingScreenType;
@property (readonly, nonatomic) ICASOnboardingUserAction *onboardingUserAction;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithOnboardingScreenType:(id)a0 onboardingUserAction:(id)a1;

@end
