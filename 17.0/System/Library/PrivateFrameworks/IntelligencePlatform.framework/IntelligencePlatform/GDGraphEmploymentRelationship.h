@class NSString, GDEntityIdentifier, NSArray;
@protocol GDGraphEntityIdentifier;

@interface GDGraphEmploymentRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *department;
@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *organizationId;
@property (readonly, copy, nonatomic) NSArray *allDepartment;
@property (readonly, copy, nonatomic) NSArray *allOrganizationId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDepartmentField:(id)a0 organizationIdField:(id)a1 allDepartmentField:(id)a2 allOrganizationIdField:(id)a3;

@end
