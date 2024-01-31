@class NSString, NSDate;

@interface MSSetupCompleteEvent : MSBaseSetupEvent

@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) unsigned long long numberOfHomesWithVR;
@property (nonatomic) unsigned long long numberOfHomeAdded;
@property (nonatomic) BOOL openDefaultService;
@property (nonatomic) BOOL didSwitchAccount;

- (id)init;
- (id)encoded;
- (void).cxx_destruct;
- (void)addHome:(id)a0;

@end
