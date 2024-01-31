@class NSObject, BSSMO, NSDate;

@interface LeaveMO : NSManagedObject

@property (nonatomic) double assocDuration;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSObject *histBcnPer;
@property (retain, nonatomic) NSObject *histBcnSched;
@property (retain, nonatomic) NSObject *histCca;
@property (retain, nonatomic) NSObject *histFwTxFrames;
@property (retain, nonatomic) NSObject *histFwTxPer;
@property (retain, nonatomic) NSObject *histFwTxRetrans;
@property (retain, nonatomic) NSObject *histRssi;
@property (retain, nonatomic) NSObject *histRxFrames;
@property (retain, nonatomic) NSObject *histSnr;
@property (retain, nonatomic) NSObject *histTxFrames;
@property (retain, nonatomic) NSObject *histTxPer;
@property (retain, nonatomic) NSObject *histTxRetrans;
@property (nonatomic) BOOL isInVoluntary;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) int subReason;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)firstLeaveAfter:(id)a0 ssid:(id)a1 moc:(id)a2;
+ (id)generateInstance:(id)a0;

@end
