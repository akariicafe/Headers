@class NSArray, NSString, NSDictionary, WebBookmark;

@interface WebBookmarkChange : NSObject <WBChange>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int bookmarkID;
@property (nonatomic) int parentID;
@property (nonatomic) int associatedBookmarkID;
@property (nonatomic) int specialFolderID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (nonatomic) unsigned long long modifiedAttributes;
@property (copy, nonatomic) NSArray *bookmarks;
@property (readonly, nonatomic) BOOL shouldSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)bookmarkAddChangeWithBookmark:(id)a0;
+ (id)bookmarkModifyChangeWithBookmark:(id)a0;
+ (id)deleteChangeWithBookmark:(id)a0;
+ (id)moveChangeWithBookmark:(id)a0 toFolderWithID:(int)a1;
+ (id)reorderChangeWithBookmark:(id)a0 afterBookmark:(id)a1;
+ (id)replaceChangeWithBookmarks:(id)a0 inFolderWithID:(int)a1;
+ (id)replaceChangeWithBookmarks:(id)a0 inFolderWithSpecialID:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringForType:(long long)a0;
- (void)_setModifiedAttributesIfSupported;
- (void)applyModificationsToBookmark:(id)a0;
- (BOOL)attributesMarkedAsModify:(unsigned long long)a0;
- (id)initWithBookmark:(id)a0 bookmarkID:(int)a1 parentID:(int)a2 associatedBookmarkID:(int)a3 changeType:(long long)a4;
- (id)initWithBookmark:(id)a0 bookmarkID:(int)a1 parentID:(int)a2 changeType:(long long)a3;
- (id)initWithBookmarkID:(int)a0 parentID:(int)a1 associatedBookmarkID:(int)a2 changeType:(long long)a3;
- (id)initWithBookmarkID:(int)a0 parentID:(int)a1 changeType:(long long)a2;
- (id)initWithBookmarks:(id)a0 parentID:(int)a1 changeType:(long long)a2;
- (id)initWithBookmarks:(id)a0 parentID:(int)a1 specialFolderID:(int)a2 changeType:(long long)a3;
- (id)initWithBookmarks:(id)a0 specialFolderID:(int)a1 changeType:(long long)a2;
- (void)updateChangeAfterUpdatingInMemoryID:(int)a0 withDatabaseID:(int)a1;

@end
