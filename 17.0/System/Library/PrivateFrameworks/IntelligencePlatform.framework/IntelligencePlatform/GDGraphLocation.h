@class NSString, GDGraphLocationEntityIdentifier, GDGraphLocationLatLongRelationship, GDGraphLocationAddressRelationship, NSArray;

@interface GDGraphLocation : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphLocationEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *locationLabel;
@property (readonly, copy, nonatomic) GDGraphLocationLatLongRelationship *latLong;
@property (readonly, copy, nonatomic) GDGraphLocationAddressRelationship *address;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSString *muid;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) NSArray *allLocationLabel;
@property (readonly, copy, nonatomic) NSArray *allLatLong;
@property (readonly, copy, nonatomic) NSArray *allAddress;
@property (readonly, copy, nonatomic) NSArray *allMuid;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 nameField:(id)a1 locationLabelField:(id)a2 latLongField:(id)a3 addressField:(id)a4 identifiersField:(id)a5 muidField:(id)a6 allNameField:(id)a7 allLocationLabelField:(id)a8 allLatLongField:(id)a9 allAddressField:(id)a10 allMuidField:(id)a11;

@end
