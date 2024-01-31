@class NSString, BPSAggregator, NSDate;

@interface BPSSessionWindowAssigner : NSObject <BPSWindowAssigner> {
    double _gap;
    BPSAggregator *_aggregator;
    id /* block */ _timestamp;
    unsigned long long _identifier;
    NSDate *_lastTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)assignWindow:(id)a0 input:(id)a1;
- (id)initWithGap:(double)a0 aggregator:(id)a1;
- (id)initWithGap:(double)a0 timestamp:(id /* block */)a1 aggregator:(id)a2;
- (id)updateAndReturnNewWindowStates:(id)a0 input:(id)a1;

@end
