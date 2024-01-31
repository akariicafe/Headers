@class HMPersonManager, HMPerson, NSString, HMHome;

@interface HFPersonItem : HFFetchedHomeKitObjectItem <NSCopying, HFPersonLikeItem>

@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithPerson:(id)a0 fromPersonManager:(id)a1 home:(id)a2;
- (id)_homeKitObjectFetch;

@end
