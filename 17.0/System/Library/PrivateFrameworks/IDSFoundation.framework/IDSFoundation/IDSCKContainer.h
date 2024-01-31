@class NSString, IDSCKDatabase;

@interface IDSCKContainer : NSObject

@property (readonly) NSString *containerIdentifier;
@property (readonly, nonatomic) IDSCKDatabase *privateCloudDatabase;
@property (readonly, nonatomic) IDSCKDatabase *publicCloudDatabase;

+ (id)containerWithIdentifier:(id)a0;
+ (Class)__class;

- (void).cxx_destruct;

@end
