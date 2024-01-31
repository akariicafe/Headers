@class NSString, NSNumber, NSSet;

@interface CRKASMCourseUpdateProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *color;
@property (retain, nonatomic) NSNumber *mascot;
@property (copy, nonatomic) NSSet *usersToAdd;
@property (copy, nonatomic) NSSet *usersToRemove;
@property (copy, nonatomic) NSSet *trustedUsersToAdd;
@property (copy, nonatomic) NSSet *trustedUsersToRemove;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)areFulfilledByCourse:(id)a0;

@end
