@class NSString, GDEntityIdentifier, NSArray;
@protocol GDGraphEntityIdentifier;

@interface GDGraphLocationRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *locationId;
@property (readonly, copy, nonatomic) NSArray *allLabel;
@property (readonly, copy, nonatomic) NSArray *allLocationId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabelField:(id)a0 locationIdField:(id)a1 allLabelField:(id)a2 allLocationIdField:(id)a3;

@end
