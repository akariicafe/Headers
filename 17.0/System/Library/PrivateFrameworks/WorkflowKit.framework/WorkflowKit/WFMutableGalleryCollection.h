@class NSString, CKRecordID, NSArray, NSDate;

@interface WFMutableGalleryCollection : WFGalleryCollection

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *collectionDescription;
@property (copy, nonatomic) NSArray *workflows;
@property (nonatomic) long long minVersion;
@property (copy, nonatomic) NSArray *supportedIdioms;
@property (retain, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

- (void).cxx_destruct;

@end
