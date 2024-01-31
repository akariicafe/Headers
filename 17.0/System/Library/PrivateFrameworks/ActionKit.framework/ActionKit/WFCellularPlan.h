@class NSUUID, NSString, CTXPCServiceSubscriptionContext, NSArray, CoreTelephonyClient, CTCellularPlanItem;

@interface WFCellularPlan : NSObject

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *ctContext;
@property (readonly, nonatomic) CoreTelephonyClient *client;
@property (readonly, weak, nonatomic) CTCellularPlanItem *planItem;
@property (readonly, nonatomic) NSUUID *subscriptionContextUUID;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *carrierName;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDefaultVoiceLine;
@property (readonly, nonatomic) BOOL isDefaultDataLine;
@property (readonly, nonatomic) BOOL isDataOnlyLine;
@property (nonatomic) BOOL smartDataModeEnabled;
@property (nonatomic) BOOL dataRoamingEnabled;
@property (nonatomic) long long currentRATMode;
@property (readonly, nonatomic) NSString *currentRATModeLabel;
@property (readonly, nonatomic) NSArray *availableRATModes;

- (void).cxx_destruct;
- (id)serviceDescriptor;
- (id)initWithCTXPCServiceSubscriptionContext:(id)a0 client:(id)a1 planItem:(id)a2;
- (id)labelForRATMode:(long long)a0;

@end
