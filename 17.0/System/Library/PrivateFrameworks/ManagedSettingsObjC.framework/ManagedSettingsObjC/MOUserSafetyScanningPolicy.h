@class NSString, NSSet, NSDictionary;

@interface MOUserSafetyScanningPolicy : NSObject <MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long policy;
@property (readonly) NSSet *services;
@property (readonly) NSDictionary *allServices;
@property (readonly) NSSet *applications;
@property (readonly) NSDictionary *allApplications;
@property (readonly) NSString *interventionType;

+ (id)initializeWithPersistableValue:(id)a0;
+ (id)communicationSafetyWithInterventionType:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;
+ (id)nonePolicy;
+ (id)nudityDetectionPolicyWithAllServices:(id)a0 allApplications:(id)a1;
+ (id)nudityDetectionPolicyWithServices:(id)a0 applications:(id)a1;

- (void).cxx_destruct;
- (id)initWithAllServices:(id)a0 allApplications:(id)a1 interventionType:(id)a2;

@end
