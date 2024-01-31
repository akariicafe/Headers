@class NSString, NSUUID, NSData, NSSet, NSNumber;

@interface ManagedSticker : NSManagedObject

@property (nonatomic, retain) NSNumber *attributionAdamID;
@property (nonatomic, copy) NSString *attributionBundleIdentifier;
@property (nonatomic, copy) NSString *attributionName;
@property (nonatomic, copy) NSString *accessibilityName;
@property (nonatomic) int byteCount;
@property (nonatomic) double creationDate;
@property (nonatomic) int effect;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) double lastUsedDate;
@property (nonatomic) double libraryIndex;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;
@property (nonatomic, retain) NSSet *representations;
@property (nonatomic) int version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
