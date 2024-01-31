@class NSSet, NSString, SBIconView, SBActivationSettings;

@interface SBIconLaunchContext : NSObject <SBHIconLaunchContext>

@property (retain, nonatomic) SBActivationSettings *activationSettings;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) SBIconView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
