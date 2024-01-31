@class NSSet, NAIdentity, NSDictionary, NSString;

@interface HFServiceStateCharacteristicMatchResult : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly, copy, nonatomic) NSDictionary *servicesByUUID;
@property (readonly, copy, nonatomic) NSSet *allCharacteristics;
@property (readonly, copy, nonatomic) NSDictionary *characteristicsByServiceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)matchResultByMergingResults:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServices:(id)a0 characteristics:(id)a1;
- (id)initWithServices:(id)a0 characteristicsByServiceUUID:(id)a1;

@end
