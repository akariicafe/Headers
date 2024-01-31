@class NSString, GDEntityIdentifier, NSArray;
@protocol GDGraphEntityIdentifier;

@interface GDGraphAgentAffiliationRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *personId;
@property (readonly, copy, nonatomic) NSArray *allLabel;
@property (readonly, copy, nonatomic) NSArray *allPersonId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabelField:(id)a0 personIdField:(id)a1 allLabelField:(id)a2 allPersonIdField:(id)a3;

@end
