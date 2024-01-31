@class NSSet, NSDictionary, PBFPosterRoleCoordinatorChange, NSString, NSUUID;

@interface PBFPosterDataStoreEvent : NSObject

@property (copy, nonatomic) NSSet *relatedProviders;
@property (copy, nonatomic) NSSet *relatedPosters;
@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) PBFPosterRoleCoordinatorChange *originatingRoleCoordinatorChange;
@property (copy, nonatomic) id /* block */ revertBlock;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) BOOL couldRevert;

- (BOOL)revert;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToEvent:(id)a0;
- (id)description;
- (BOOL)isValidWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dumpLongDescriptionWithPreamble:(id)a0 log:(id)a1 type:(unsigned char)a2;

@end
