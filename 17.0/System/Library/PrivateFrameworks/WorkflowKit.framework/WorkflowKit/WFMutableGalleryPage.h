@class NSString, CKRecordID, NSArray, NSNumber;

@interface WFMutableGalleryPage : WFGalleryPage

@property (copy, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *minVersion;
@property (copy, nonatomic) NSNumber *isRoot;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSArray *collections;
@property (copy, nonatomic) NSArray *routines;
@property (copy, nonatomic) NSArray *donations;
@property (copy, nonatomic) NSArray *donationsGroupedByApp;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) CKRecordID *base;
@property (copy, nonatomic) NSString *persistentIdentifier;

- (void).cxx_destruct;

@end
