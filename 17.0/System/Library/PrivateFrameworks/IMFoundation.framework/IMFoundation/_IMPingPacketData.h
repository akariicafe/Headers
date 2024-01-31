@interface _IMPingPacketData : NSObject

@property (readonly, nonatomic) int sequenceNumber;
@property (readonly, nonatomic) BOOL timedOut;
@property (readonly, nonatomic) struct timeval { long long tv_sec; int tv_usec; } timeSent;
@property (readonly, nonatomic) int error;
@property (readonly, nonatomic) double rtt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_markPacketAsTimedOut:(double)a0;
- (void)_returnPacketArrived;
- (id)initWithSequeneceNumber:(int)a0 timesent:(struct timeval { long long x0; int x1; } *)a1 error:(int)a2;

@end
