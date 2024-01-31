@class NSString;

@interface CALNEKFoundInAppsEventTracker : NSObject <CALNFoundInAppsEventTracker>

@property (class, readonly, nonatomic) CALNEKFoundInAppsEventTracker *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPseudoEventInitialTimeToLeaveFired;

@end
