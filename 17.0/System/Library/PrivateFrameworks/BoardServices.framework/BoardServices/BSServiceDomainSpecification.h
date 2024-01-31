@class NSString, NSSet, NSDictionary, NSArray, NSOrderedSet;

@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {
    NSDictionary *_servicesByIdentifier;
    NSArray *_enableIfFeatureFlags;
    NSArray *_disableIfFeatureFlags;
    NSOrderedSet *_orderedServices;
    unsigned long long _start;
    NSSet *_derivedServiceRestrictions;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *machName;
@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)serviceForIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
