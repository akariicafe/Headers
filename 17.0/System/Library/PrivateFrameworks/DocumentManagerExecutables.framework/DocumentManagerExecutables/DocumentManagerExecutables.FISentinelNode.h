@class NSString, UTType, FPItem, NSDate, NSNumber, NSURL;

@interface DocumentManagerExecutables.FISentinelNode : FICustomNode

@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) FPItem *fpItem;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSURL *fileURL;

- (id)init;
- (void).cxx_destruct;

@end
