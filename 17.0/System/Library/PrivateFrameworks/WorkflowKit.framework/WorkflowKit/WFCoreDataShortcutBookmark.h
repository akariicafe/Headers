@class NSString, NSData;

@interface WFCoreDataShortcutBookmark : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *bookmarkData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;

+ (id)fetchRequest;

- (id)descriptor;

@end
