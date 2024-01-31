@class NSUUID, NSDate;
@protocol SATimeClientProtocol;

@interface SAAlarmTask : NSObject

@property (copy, nonatomic) NSUUID *alarmUUID;
@property (copy, nonatomic) NSDate *fireDate;
@property (weak, nonatomic) id<SATimeClientProtocol> client;

- (void).cxx_destruct;

@end
