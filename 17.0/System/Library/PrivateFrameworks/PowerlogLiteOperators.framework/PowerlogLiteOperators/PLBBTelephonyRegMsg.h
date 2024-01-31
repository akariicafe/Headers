@class NSString, NSDictionary, NSDate, NSNumber;

@interface PLBBTelephonyRegMsg : PLBasebandMessage

@property unsigned char changed;
@property (retain) NSNumber *cellID;
@property (retain) NSNumber *lac;
@property (retain) NSNumber *dataAttached;
@property (retain) NSNumber *dataActive;
@property (retain) NSString *dataIndicator;
@property (retain) NSNumber *homeNetwork;
@property (retain) NSString *registrationStatus;
@property (retain) NSString *operatorName;
@property (retain) NSDate *timeUpdate;
@property (retain) NSDictionary *telRegInfo;

+ (id)bbEuLogMsgNameTelephonyReg;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (id)init;
- (void)logEventPointTelephonyRegistrationAtInit;
- (void)refreshTelephonyReg;
- (id)humanReadableRegistrationStatus:(id)a0;
- (void)setAttrDataIndicator:(id)a0;
- (void)setAttrDataActive:(id)a0;
- (void)setAttrHomeNetwork:(id)a0;
- (void)setAttrOperatorName:(id)a0;
- (void)setAttrRegistrationStatus:(id)a0;
- (void)fillPLEntryAndSend:(id)a0;
- (void).cxx_destruct;
- (id)humanReadableDataIndicator:(id)a0;
- (void)setAttrDataAttached:(id)a0;
- (void)setAttrLac:(id)a0;
- (void)processTelReg;
- (void)logEventPointTelephonyRegistration;
- (void)setAttrCellID:(id)a0;

@end
