@class NSArray, NSString, NSSet, UIImage, NSNumber;

@interface FBKParticipant : FBKManagedFeedbackObject

@property (class, readonly, nonatomic) NSArray *sortDescriptors;

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSSet *assignedFeedback;
@property (retain, nonatomic) NSSet *followups;
@property (retain, nonatomic) NSSet *originatedFeedback;
@property (retain, nonatomic) NSSet *teams;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) UIImage *contactImage;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)currentParticipantForContext:(id)a0;
+ (id)keyPathsForValuesAffectingFullName;

@end
