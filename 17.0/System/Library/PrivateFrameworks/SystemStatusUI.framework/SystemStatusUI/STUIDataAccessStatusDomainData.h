@class NSArray, NSSet, NSString, STListData;

@interface STUIDataAccessStatusDomainData : NSObject <STStatusDomainData>

@property (readonly, copy, nonatomic) STListData *attributionListData;
@property (readonly, copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly, copy, nonatomic) NSSet *attributedEntities;
@property (readonly, copy, nonatomic) NSSet *executableIdentities;
@property (readonly, copy, nonatomic) NSSet *userIdentities;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *activeAttributionData;
@property (readonly, copy, nonatomic) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_initWithAttributionListData:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithAttributionListData:(id)a0;
- (id)dataWithEntitiesThatAreSystemServices:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithData:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)dataWithExecutableIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataWithAttributedEntity:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataWithAccessType:(unsigned long long)a0;

@end
