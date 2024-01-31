@class CSSearchableItem, NSString, NSData, NSDate, NSObject, EDSearchableIndexRichLinkItemMetadatum;
@protocol OS_os_log;

@interface EDSearchableIndexRichLinkItem : NSObject <EFLoggable, EDIndexableItem> {
    CSSearchableItem *_searchableItem;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (copy, nonatomic) NSString *richLinkPersistentID;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (retain, nonatomic) EDSearchableIndexRichLinkItemMetadatum *metadatum;
@property (nonatomic) BOOL requiresPreprocessing;
@property (readonly, copy, nonatomic) NSString *richLinkItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) long long indexingType;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) unsigned long long itemInstantiationTime;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (retain, nonatomic) NSData *underlyingData;
@property (readonly, nonatomic) BOOL hasCompleteData;
@property (readonly, nonatomic) BOOL alwaysMarkAsIndexed;
@property (readonly, nonatomic) BOOL shouldExcludeFromIndex;

+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)a0;
+ (id)completeSearchableIndexRichLinkItemIdentifierFromID:(id)a0;
+ (id)messageIDandRichLinkIDFromRichLinkIdentifier:(id)a0;

- (id)searchableItem;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)preprocess;
- (id)fetchIndexableAttachments;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (id)initWithRichLinkItemIdentifier:(id)a0 messagePersistentID:(id)a1 metadatum:(id)a2;

@end
