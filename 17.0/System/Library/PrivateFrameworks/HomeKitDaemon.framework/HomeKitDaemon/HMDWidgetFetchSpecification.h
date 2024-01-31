@class NSSet, NSString;

@interface HMDWidgetFetchSpecification : HMFObject

@property (class, readonly) NSSet *lightsFetchSpecifications;
@property (class, readonly) NSSet *mainHomeSecurityFetchSpecifications;
@property (class, readonly) NSSet *allOtherHomesSingleAccessorySecurityFetchSpecifications;
@property (class, readonly) NSSet *mainHomeInteractiveFetchSpecifications;
@property (class, readonly) NSSet *allHomeWidgetKinds;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *serviceTypes;
@property (readonly, copy) NSSet *associatedServiceTypes;
@property (readonly, copy) NSSet *characteristicTypes;
@property (readonly, copy) NSSet *affectedWidgetKinds;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithName:(id)a0 serviceTypes:(id)a1 associatedServiceTypes:(id)a2 characteristicTypes:(id)a3 affectedWidgetKinds:(id)a4;

@end
