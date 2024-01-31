@class NSString, NSData, NSDate;

@interface EDConversationInfo : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *conversationUUID;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSString *messageIds;
@property (nonatomic) BOOL notifyMe;
@property (nonatomic) BOOL muted;

+ (id)fetchRequest;

@end
