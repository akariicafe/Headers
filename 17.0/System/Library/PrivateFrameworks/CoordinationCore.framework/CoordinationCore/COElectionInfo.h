@class COBallot;

@interface COElectionInfo : NSObject

@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) COBallot *ballot;

- (unsigned long long)hash;
- (id)leader;
- (void).cxx_destruct;
- (id)initWithCommand:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGeneration:(unsigned long long)a0 ballot:(id)a1;
- (BOOL)shouldTriggerElectionForElectionInfo:(id)a0;

@end
