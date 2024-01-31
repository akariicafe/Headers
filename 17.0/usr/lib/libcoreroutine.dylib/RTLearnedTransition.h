@class NSString, NSUUID, NSDate;

@interface RTLearnedTransition : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *stopDate;
@property (readonly, nonatomic) NSUUID *visitIdentifierOrigin;
@property (readonly, nonatomic) NSUUID *visitIdentifierDestination;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long predominantMotionActivityType;

+ (id)createWithLearnedTransitionMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;
+ (id)createWithLearnedLocationOfInterestTransitionMO:(id)a0;

- (id)init;
- (void)updateManagedObject:(id)a0;
- (id)initWithIdentifier:(id)a0 startDate:(id)a1 stopDate:(id)a2 visitIdentifierOrigin:(id)a3 visitIdentifierDestination:(id)a4 creationDate:(id)a5 expirationDate:(id)a6 predominantMotionActivityType:(unsigned long long)a7;
- (void).cxx_destruct;
- (id)managedObjectWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
