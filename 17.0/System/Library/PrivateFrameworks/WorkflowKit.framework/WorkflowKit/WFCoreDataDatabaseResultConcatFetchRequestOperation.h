@class NSArray, NSSet, NSString, NSEntityDescription;

@interface WFCoreDataDatabaseResultConcatFetchRequestOperation : NSObject <WFCoreDataDatabaseResultFetchOperation>

@property (readonly, nonatomic) NSArray *fetchRequests;
@property (readonly, nonatomic) long long resultsLimit;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)countWithContext:(id)a0 error:(id *)a1;
- (id)initWithFetchRequests:(id)a0 resultsLimit:(long long)a1;
- (id)initWithFetchRequests:(id)a0 resultsLimit:(long long)a1 relationshipKeysAffectingDescriptors:(id)a2;
- (id)resultsWithContext:(id)a0 error:(id *)a1;

@end
