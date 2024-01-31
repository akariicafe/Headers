@class NSDictionary, NSString;

@interface HMIPersonsModelEquivalencyTable : HMFObject <HMFLogging>

@property (readonly) NSDictionary *personToEquivalencyCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)equivalencyCellForPerson:(id)a0;
- (BOOL)facesAreSamePersonFromSet:(id)a0 andSet:(id)a1;
- (BOOL)facesAreSamePersonFromSet:(id)a0 andSet:(id)a1 distanceThreshold:(double)a2 percentMatchingThreshold:(double)a3;
- (id)initWith;
- (id)initWithPersonsModels:(id)a0 userDefinedPersonLinks:(id)a1 error:(id *)a2;

@end
