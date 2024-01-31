@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {
    unsigned long long _ocnt_precomputedHash;
}

@property (readonly, nonatomic) NSDictionary *titlesAndParticipants;
@property (readonly, nonatomic) double earliestStartTime;
@property (readonly, nonatomic) unsigned long long eventCount;
@property (readonly, nonatomic) unsigned long long eventHasAlarmCount;

+ (id)eventMetadataWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 eventCount:(unsigned long long)a2 eventHasAlarmCount:(unsigned long long)a3;

- (unsigned long long)_hash;
- (id)init;
- (unsigned long long)hash;
- (id)copyWithReplacementTitlesAndParticipants:(id)a0;
- (id)description;
- (BOOL)isEqualToEventMetadata:(id)a0;
- (id)initWithTitlesAndParticipants:(id)a0 earliestStartTime:(double)a1 eventCount:(unsigned long long)a2 eventHasAlarmCount:(unsigned long long)a3;
- (id)copyWithReplacementEarliestStartTime:(double)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementEventCount:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementEventHasAlarmCount:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
