@class NSArray, GDEntityIdentifier, NSString;
@protocol GDGraphEntityIdentifier;

@interface GDGraphSoftwareRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) GDEntityIdentifier<GDGraphEntityIdentifier> *softwareId;
@property (readonly, copy, nonatomic) NSArray *allSoftwareId;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSoftwareIdField:(id)a0 allSoftwareIdField:(id)a1;

@end
