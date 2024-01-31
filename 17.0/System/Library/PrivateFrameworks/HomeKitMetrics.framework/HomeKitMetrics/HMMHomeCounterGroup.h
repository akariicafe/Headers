@class NSUUID, HMMHomeGroup;

@interface HMMHomeCounterGroup : HMMNamedCounterGroup {
    long long _coreDataGroupToken;
}

@property (retain, nonatomic) HMMHomeGroup *coreDataGroup;
@property (readonly, nonatomic) NSUUID *homeUUID;

- (void).cxx_destruct;
- (id)coreDataGroupUsingContext:(id)a0;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 partitionProvider:(id)a2 primaryStorage:(id)a3;

@end
