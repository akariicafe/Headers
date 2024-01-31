@class NSString, NSUUID, NSData, NSDate;

@interface FTStoredMessage : NSManagedObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSUUID *callUUID;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateDeleted;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSString *from;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isRTT;
@property (nonatomic) BOOL isSensitive;
@property (nonatomic) short mailboxType;
@property (nonatomic, copy) NSData *messageFile;
@property (nonatomic, copy) NSData *messageThumbnail;
@property (nonatomic) short messageType;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *recipient;
@property (nonatomic, copy) NSUUID *recordUUID;
@property (nonatomic, copy) NSString *simID;
@property (nonatomic, copy) NSString *thumbnailType;
@property (nonatomic, copy) NSData *transcript;
@property (nonatomic) short transcriptionStatus;
@property (nonatomic, copy) NSString *transcriptType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
