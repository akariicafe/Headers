@class NSString, NSDictionary, NSArray, NSDate, CKRecordID, NSData;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject, NSMutableCopying>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) NSArray *workflows;
@property (readonly, nonatomic) long long minVersion;
@property (copy, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
