@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {
    NSDictionary *_policies;
    struct opaqueCMSimpleQueue { } *_networkElementQueue;
}

@property (copy, nonatomic) id /* block */ processCompleteHandler;

- (int)write:(id)a0;
- (void)dealloc;
- (id)initWithPolicies:(id)a0;
- (void)connectFrom:(id)a0;
- (void)connectTo:(id)a0;
- (void)drainAndReleasePackets;
- (void)runUntilTime:(double)a0;

@end
