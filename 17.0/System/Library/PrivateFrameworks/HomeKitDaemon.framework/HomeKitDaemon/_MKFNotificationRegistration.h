@class NSUUID, NSString, NSDate, NSPredicate, MKFNotificationRegistrationDatabaseID, Protocol, NSNumber, _MKFUser;
@protocol MKFUser, MKFHome;

@interface _MKFNotificationRegistration : _MKFModel <MKFNotificationRegistration, MKFNotificationRegistrationPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFUser *user;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfNotificationRegistration;

@end
