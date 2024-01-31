@class NSArray;

@interface WiFiUsageSessionPingPongStats : NSObject

@property (nonatomic) unsigned long long pingPongNth;
@property (retain, nonatomic) NSArray *sequence;
@property (nonatomic) BOOL pingPongSequenceIsLowRssiOnly;
@property (nonatomic) BOOL pingPongSequenceIsReassocOnly;
@property (nonatomic) BOOL pingPongSequenceIsReassocOrLowRSSIOnly;

- (void).cxx_destruct;
- (id)initWithPingPongSequence:(id)a0;

@end
