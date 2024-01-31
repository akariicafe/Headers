@class PLAgent, NSData, NSDate, NSNumber;

@interface PLBBMsgHandler : NSObject

@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) PLAgent *agent;
@property (retain, nonatomic) NSNumber *seqNum;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned int ticksInGoodState;
@property (readonly, nonatomic) unsigned int ticksInGPSONState;
@property (readonly, retain, nonatomic) NSDate *timestamp;
@property (readonly, retain, nonatomic) NSDate *apTimestamp;
@property (readonly, retain, nonatomic) NSDate *calibratedTimestamp;
@property (nonatomic) double timeCalibration;

+ (id)getMsgHandler;

- (id)init;
- (void).cxx_destruct;
- (id)decodeMsgHeader;
- (void)handleMsg:(id)a0 forAgent:(id)a1;
- (void)registerWithHandlerAs:(id)a0 forType:(unsigned long long)a1;

@end
