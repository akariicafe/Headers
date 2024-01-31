@class NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject

@property (copy, nonatomic) NSString *attachmentPersistentID;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (copy, nonatomic) NSString *attachmentID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long mailboxID;

- (void).cxx_destruct;

@end
