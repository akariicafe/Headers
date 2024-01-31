@class WebBookmark, NSString, NSDictionary, NSURL, WBSCRDTPosition, NSArray, WBLocalTabAttributes;

@interface WBTab : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable, WBSCloudTabItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) int parentIdentifier;
@property (readonly, nonatomic, getter=wasModified) BOOL modified;
@property (readonly, nonatomic, getter=wasAdded) BOOL added;
@property (readonly, nonatomic, getter=wasMoved) BOOL moved;
@property (readonly, nonatomic, getter=_isMutable) BOOL isMutable;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic) int orderIndex;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) WBLocalTabAttributes *localAttributes;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic, getter=isInUnnamedTabGroup) BOOL inUnnamedTabGroup;
@property (readonly, nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, copy, nonatomic) NSString *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL isBlank;
@property (readonly, nonatomic) BOOL isMarkedAsRead;
@property (readonly, copy, nonatomic) NSURL *syncableURL;
@property (readonly, nonatomic) BOOL canSetPinned;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, copy, nonatomic) NSString *pinnedTitle;
@property (readonly, copy, nonatomic) NSURL *pinnedURL;
@property (readonly, copy, nonatomic) NSString *debugSyncDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL isShowingReader;
@property (readonly, copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) BOOL matchedLastSearch;

+ (id)startPageTabWithDeviceIdentifier:(id)a0;
+ (id)pinnedTabWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;

- (id)initWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;
- (id)mutableDuplicate;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3 lastVisitTime:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasSameUUIDAndURLAsTab:(id)a0;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3;
- (BOOL)isIdentical:(id)a0;
- (id)duplicate;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 pinned:(BOOL)a3 pinnedTitle:(id)a4 pinnedURL:(id)a5 localAttributes:(id)a6 deviceIdentifier:(id)a7;
- (id)_addressFromURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)_updateBookmarkWithURL:(id)a0 shouldSync:(BOOL)a1;
- (void)_setLocalURLString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBookmark:(id)a0;
- (BOOL)canCloseAutomaticallyForInterval:(double)a0;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1 lastVisitTime:(id)a2;

@end
