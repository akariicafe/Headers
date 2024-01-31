@class NSString, NSSet;

@interface MOWebContentFilterPolicy : NSObject <MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long policy;
@property (readonly) NSSet *autoAllow;
@property (readonly) NSSet *neverAllow;
@property (readonly) NSSet *onlyAllow;

+ (id)initializeWithPersistableValue:(id)a0;
+ (id)allPolicyWithExceptions:(id)a0;
+ (id)autoPolicyWithDomains:(id)a0 exceptions:(id)a1;
+ (BOOL)isValidPersistableRepresentation:(id)a0;
+ (id)nonePolicy;
+ (id)specificPolicyWithDomains:(id)a0;

- (void).cxx_destruct;
- (id)initWithAutoAllow:(id)a0 neverAllow:(id)a1 onlyAllow:(id)a2;

@end
