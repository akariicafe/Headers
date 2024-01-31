@class GDGraphSoftwareEntityIdentifier, NSString, NSArray;

@interface GDGraphSoftware : NSObject <GDGraphObject>

@property (readonly, copy, nonatomic) GDGraphSoftwareEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *allBundleId;
@property (readonly, copy, nonatomic) NSArray *allName;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntityIdentifierField:(id)a0 bundleIdField:(id)a1 nameField:(id)a2 allBundleIdField:(id)a3 allNameField:(id)a4;

@end
