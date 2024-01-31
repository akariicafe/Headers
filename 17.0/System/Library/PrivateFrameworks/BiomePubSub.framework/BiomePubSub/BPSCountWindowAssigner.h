@class NSString, BPSAggregator;

@interface BPSCountWindowAssigner : NSObject <BPSWindowAssigner> {
    unsigned long long _capacity;
    BPSAggregator *_aggregator;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
