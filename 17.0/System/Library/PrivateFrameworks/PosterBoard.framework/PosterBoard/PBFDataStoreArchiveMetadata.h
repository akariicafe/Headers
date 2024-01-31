@class NSString, NSURL, NSDate;

@interface PBFDataStoreArchiveMetadata : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *archiveName;
@property (readonly, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSDate *creationDate;

- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
