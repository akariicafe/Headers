@class NSURL, NSString, BRCAppLibrary, NSMutableSet, BRCItemGlobalID, BRFileObjectID, NSSet;

@interface BRCNotification : BRQueryItem {
    NSMutableSet *_appLibraryIDsWithReverseAliases;
    NSString *_unsaltedBookmarkData;
}

@property (retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases;
@property (retain, nonatomic) NSString *unsaltedBookmarkData;
@property (readonly, nonatomic) BRCAppLibrary *appLibrary;
@property (readonly, nonatomic) NSString *aliasSourceAppLibraryID;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemGlobalID *parentGlobalID;
@property (readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
@property (readonly, nonatomic) NSString *oldAppLibraryID;
@property (retain, nonatomic) NSSet *parentGlobalIDs;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isDocumentsFolder;

+ (BOOL)supportsSecureCoding;
+ (id)notificationFromItem:(id)a0;
+ (id)notificationFromItem:(id)a0 relpath:(id)a1;
+ (id)notificationGatheredFromItem:(id)a0;
+ (id)notificationWithAliasItem:(id)a0 targetItemNotification:(id)a1;

- (Class)classForCoder;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canMerge:(id)a0;
- (id)subclassDescription;
- (void)_addAliasDecoration:(id)a0;
- (void)generateLogicalExtension:(id)a0 physicalExtension:(id)a1;
- (id)initWithAliasItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (id)initWithLocalItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (void)setNumberAttribute:(id)a0 forKey:(id)a1;

@end
