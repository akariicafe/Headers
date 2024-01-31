@class NSString, NSArray;

@interface GDGraphVisualIdentifierRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *visualIdentifier;
@property (readonly, copy, nonatomic) NSString *associationReason;
@property (readonly, copy, nonatomic) NSString *suggestedName;
@property (readonly, copy, nonatomic) NSArray *allVisualIdentifier;
@property (readonly, copy, nonatomic) NSArray *allAssociationReason;
@property (readonly, copy, nonatomic) NSArray *allSuggestedName;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVisualIdentifierField:(id)a0 associationReasonField:(id)a1 suggestedNameField:(id)a2 allVisualIdentifierField:(id)a3 allAssociationReasonField:(id)a4 allSuggestedNameField:(id)a5;

@end
