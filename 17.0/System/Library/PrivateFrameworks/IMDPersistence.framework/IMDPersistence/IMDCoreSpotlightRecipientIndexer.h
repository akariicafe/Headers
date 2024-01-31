@class NSString;

@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (class, readonly, nonatomic) NSString *timingProfileKey;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_contactForURI:(id)a0;
+ (id)_handleIDForHandleID:(id)a0;
+ (id)_selfCSPersonFromHandleID:(id)a0 messageService:(id)a1;
+ (id)groupPhotoPathCustomKey;
+ (void)indexItem:(id)a0 withChat:(id)a1 isReindexing:(BOOL)a2 metadataToUpdate:(id)a3 timingProfiler:(id)a4;
+ (id)suggestedContactNameCustomKey;
+ (id)suggestedContactPhotoCustomKey;


@end
