@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (readonly, nonatomic) unsigned int swapId;
@property (readonly, nonatomic) unsigned int frameSeed;

- (id)initWithHIDLatencyInterval:(id)a0;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2 swapID:(unsigned int)a3 frameSeed:(unsigned int)a4;

@end
