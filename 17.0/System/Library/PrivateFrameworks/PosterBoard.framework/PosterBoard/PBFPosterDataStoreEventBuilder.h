@class NSString, NSDictionary, PBFPosterRoleCoordinatorChange, NSMutableSet;

@interface PBFPosterDataStoreEventBuilder : NSObject {
    NSMutableSet *_relatedProviders;
    NSMutableSet *_relatedPosters;
    NSMutableSet *_relatedRoles;
}

@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) id fromValue;
@property (retain, nonatomic) id toValue;
@property (retain, nonatomic) PBFPosterRoleCoordinatorChange *originatingRoleCoordinatorChange;
@property (copy, nonatomic) id /* block */ revertBlock;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)activeChargerIdentifierDidUpdate:(id)a0 from:(id)a1;
+ (id)descriptorsUpdatedForProvider:(id)a0 role:(id)a1 from:(id)a2 to:(id)a3;
+ (id)extensionsUpdatedFrom:(id)a0 to:(id)a1 supportedRoles:(id)a2;
+ (id)posterActivated:(id)a0 previous:(id)a1;
+ (id)posterAdded:(id)a0;
+ (id)posterDeleted:(id)a0;
+ (id)posterSelected:(id)a0 previous:(id)a1;
+ (id)posterUpdatedFrom:(id)a0 to:(id)a1;
+ (id)postersReorderedFrom:(id)a0 to:(id)a1;
+ (id)resetRole:(id)a0;
+ (id)staticDescriptorsUpdatedForProvider:(id)a0 role:(id)a1 from:(id)a2 to:(id)a3;

- (void)reset;
- (id)buildWithError:(out id *)a0;
- (void).cxx_destruct;
- (void)relateProvider:(id)a0;
- (void)unrelatePoster:(id)a0;
- (void)relatePoster:(id)a0;
- (void)unrelateProvider:(id)a0;

@end
