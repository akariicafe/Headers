@class NSString;

@interface MOWebDomain : NSObject <MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *domain;

+ (id)initializeWithPersistableValue:(id)a0;
+ (BOOL)compareDomain:(id)a0 withDomainPattern:(id)a1 outExactMatch:(BOOL *)a2;
+ (BOOL)isValidPersistableRepresentation:(id)a0;

@end
