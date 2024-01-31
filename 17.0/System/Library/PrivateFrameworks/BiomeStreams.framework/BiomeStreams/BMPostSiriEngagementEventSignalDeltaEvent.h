@class NSString;

@interface BMPostSiriEngagementEventSignalDeltaEvent : BMEventBase <BMStoreData>

@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasSinceUIEnd;
@property (readonly, nonatomic) double sinceUIEnd;
@property (nonatomic) BOOL hasSinceUIStart;
@property (readonly, nonatomic) double sinceUIStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDuration:(double)a0 sinceUIEnd:(double)a1 sinceUIStart:(double)a2;

@end
