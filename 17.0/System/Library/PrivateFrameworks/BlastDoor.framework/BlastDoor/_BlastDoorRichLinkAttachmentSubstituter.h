@class NSArray, NSMutableArray, NSString;

@interface _BlastDoorRichLinkAttachmentSubstituter : NSObject <NSKeyedArchiverDelegate, NSKeyedUnarchiverDelegate>

@property (readonly, copy, nonatomic) NSMutableArray *archivedAttachments;
@property (copy, nonatomic) NSArray *attachmentsForUnarchiving;
@property (nonatomic) BOOL shouldSubstituteAttachments;
@property (nonatomic) BOOL shouldIgnoreAppStoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
