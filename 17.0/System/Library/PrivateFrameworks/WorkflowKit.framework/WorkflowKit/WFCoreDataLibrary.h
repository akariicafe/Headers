@class NSString, NSData;

@interface WFCoreDataLibrary : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *cloudKitRecordMetadata;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;

- (id)descriptor;

@end
