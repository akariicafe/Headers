@class NSString, NSMutableArray;

@interface HMIPersonTracker : HMFObject <HMFLogging>

@property (readonly) NSMutableArray *previousPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
