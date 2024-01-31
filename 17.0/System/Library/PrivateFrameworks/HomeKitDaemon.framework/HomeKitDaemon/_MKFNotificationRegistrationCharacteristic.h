@class Protocol, _MKFCharacteristic, NSString, NSUUID, MKFNotificationRegistrationCharacteristicDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFCharacteristic, MKFUser;

@interface _MKFNotificationRegistrationCharacteristic : _MKFNotificationRegistration <MKFNotificationRegistrationCharacteristic, MKFNotificationRegistrationCharacteristicPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) id<MKFCharacteristic> characteristic;
@property (readonly, copy, nonatomic) MKFNotificationRegistrationCharacteristicDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfNotificationRegistrationCharacteristic;

@end
