@class PLAgent, NSString, NSData, NSDate, NSNumber, PLBBMsg;

@interface PLBasebandMessage : NSObject

@property (readonly, retain, nonatomic) NSData *rawData;
@property (readonly, nonatomic) unsigned int ticksInGoodState;
@property (readonly, nonatomic) unsigned int ticksInGPSONState;
@property (readonly, retain, nonatomic) NSDate *timestamp;
@property (readonly, retain, nonatomic) NSDate *apTimestamp;
@property (readonly, retain, nonatomic) NSDate *calibratedTimestamp;
@property (nonatomic) double timeCalibration;
@property (retain) PLBBMsg *logger;
@property (retain, nonatomic) PLAgent *agent;
@property (retain, nonatomic) NSNumber *seqNum;
@property (retain, nonatomic) NSDate *date;
@property double timeCal;
@property (retain) NSString *pload;
@property (retain) NSNumber *msgType;

+ (id)messageWithData:(id)a0;

- (void)logWithLogger:(id)a0;
- (void)dealloc;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCalibratedDateGood;
- (BOOL)isTimestampValid:(char *)a0;
- (void)logEntry:(id)a0 withBody:(id)a1;
- (void)logMsgAll;

@end
