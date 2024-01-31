@class NSString, NSUUID, MSStopwatch;

@interface MSServiceEvent : NSObject

@property (nonatomic) int eventType;
@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSUUID *serviceID;
@property (nonatomic) BOOL didSucceed;
@property (retain, nonatomic) MSStopwatch *stopwatch;

- (id)initWithEventType:(int)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(int)a0 serviceID:(id)a1;
- (id)initWithEventType:(int)a0 serviceID:(id)a1 didSucceed:(BOOL)a2;

@end
