@class NSString, NSObject;
@protocol OS_os_log;

@interface EDSkyAddMessageAttachmentsAndMigrateAttachmentsTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;
+ (int)runWithConnection:(id)a0 dataProvider:(id)a1;
+ (BOOL)createMessageAttachmentsTableWithConnection:(id)a0;
+ (BOOL)createNewAttachmentTableWithConnection:(id)a0;
+ (BOOL)createNewSearchableAttachmentsTable:(id)a0;
+ (BOOL)deleteAttachmentsTableWithConnection:(id)a0;
+ (BOOL)deleteMessageAttachmentsTableWithConnection:(id)a0;
+ (BOOL)insertAttachmentIntoAttachmentTableWithAttachmentMetadata:(id)a0 connection:(id)a1;
+ (BOOL)insertIntoMessageAttachmentTableGlobalMessageID:(id)a0 attachmentMetadata:(id)a1 attachmentID:(long long)a2 connection:(id)a3;


@end
