@class NSString, NSPredicate;

@interface ICQueryObjC : NSObject {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) BOOL canBeEdited;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)objc_queryForNonDeletedNotes;
+ (id)objc_queryForNotesMatchingFilterSelection:(id)a0;
+ (id)objc_queryForNotesMatchingTagSelection:(id)a0;
+ (id)objc_queryForPinnedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)objc_queryForSharedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)objc_queryForSystemPaperNotesAllowsRecentlyDeleted:(BOOL)a0;

- (id)removingTagIdentifier:(id)a0;
- (id)replacingTagIdentifier:(id)a0 withNewTagIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)filterSelectionWithManagedObjectContext:(id)a0 account:(id)a1;
- (id)tagSelectionWithManagedObjectContext:(id)a0;

@end
