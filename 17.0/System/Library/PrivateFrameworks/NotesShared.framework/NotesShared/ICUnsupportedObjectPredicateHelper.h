@interface ICUnsupportedObjectPredicateHelper : NSObject

+ (id)predicateForSupportedAttachmentsInContext:(id)a0;
+ (id)predicateForSupportedFoldersInContext:(id)a0;
+ (id)predicateForSupportedInlineAttachmentsInContext:(id)a0;
+ (id)predicateForSupportedNotesInContext:(id)a0;
+ (void)recursivelyAddAttachment:(id)a0 toMutableSet:(id)a1;
+ (void)recursivelyAddFolder:(id)a0 toMutableSet:(id)a1;
+ (id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)a0;
+ (id)unitTest_unsupportedFolderIdentifiersWithContext:(id)a0;
+ (id)unsupportedAttachmentIdentifiersWithContext:(id)a0;
+ (id)unsupportedFolderIdentifiersWithContext:(id)a0;
+ (id)unsupportedInlineAttachmentIdentifiersWithContext:(id)a0;

@end
