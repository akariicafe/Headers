@class GDGraphSportsTeamEntityIdentifier, NSString, NSArray;

@interface GDGraphSportsTeam : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphSportsTeamEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSString *qid;
@property (readonly, copy, nonatomic) NSString *umcIdentifier;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allQid;
@property (readonly, copy, nonatomic) NSArray *allUmcIdentifier;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 identifiersField:(id)a2 qidField:(id)a3 umcIdentifierField:(id)a4 allNameField:(id)a5 allQidField:(id)a6 allUmcIdentifierField:(id)a7;

@end
