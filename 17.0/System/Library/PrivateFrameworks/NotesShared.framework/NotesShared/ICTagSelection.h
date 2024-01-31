@class NSSet, NSArray, NSURL, NSString, NSData, NSManagedObjectContext;

@interface ICTagSelection : ICFilterTypeSelection <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSURL *accountObjectIDURL;
@property (retain, nonatomic) NSSet *includedObjectIDURLs;
@property (retain, nonatomic) NSSet *excludedObjectIDURLs;
@property (retain, nonatomic) NSSet *hashtagObjectIDURLs;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long tagOperator;
@property (nonatomic) BOOL allowsRecentlyDeleted;
@property (nonatomic) BOOL automaticallyRemoveDeletedTags;
@property (readonly, nonatomic) BOOL isNonEmpty;
@property (readonly, nonatomic) BOOL hasMultipleTagsSelected;
@property (retain, nonatomic) NSSet *includedObjectIDs;
@property (retain, nonatomic) NSSet *excludedObjectIDs;
@property (retain, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSArray *includedTags;
@property (readonly, nonatomic) NSArray *excludedTags;
@property (readonly, nonatomic) NSSet *objectIDs;
@property (readonly, nonatomic) NSArray *includedTagIdentifiers;
@property (readonly, nonatomic) NSArray *excludedTagIdentifiers;
@property (readonly, nonatomic) NSArray *tagIdentifiers;
@property (readonly, nonatomic) NSArray *includedDisplayTexts;
@property (readonly, nonatomic) NSArray *excludedDisplayTexts;
@property (readonly, nonatomic) NSArray *displayTexts;
@property (readonly, nonatomic) NSArray *includedHashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSArray *excludedHashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSArray *hashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSSet *unresolvedTagIdentifiers;
@property (retain, nonatomic) NSSet *unresolvedIncludedTagIdentifiers;
@property (retain, nonatomic) NSSet *unresolvedExcludedTagIdentifiers;
@property (readonly, nonatomic) unsigned long long selectedTagCount;
@property (readonly, nonatomic) NSString *selectedTagCountString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSString *smartFolderTitle;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsNonEmpty;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)keyPathsForValuesAffectingObjectIDs;
+ (id)keyPathsForValuesAffectingSelectedTagCount;
+ (id)tagSelectionWithData:(id)a0 managedObjectContext:(id)a1;

- (id)filterName;
- (void)clear;
- (long long)filterType;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)removeUnresolvedTagIdentifiers:(id)a0;
- (void)addObjectID:(id)a0 toExcluded:(BOOL)a1;
- (void)addUnresolvedTagIdentifier:(id)a0 toExcluded:(BOOL)a1;
- (void)commonInitWithManagedObjectContext:(id)a0;
- (void)convertUnresolvedDisplayTextsInAccount:(id)a0;
- (id)copyWithManagedObjectContext:(id)a0;
- (id)displayTextsForObjectIDs:(id)a0;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)hashtagPrefixedDisplayTexts:(id)a0;
- (id)hashtagsForObjectIDs:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 includedObjectIDs:(id)a1;
- (id)initWithManagedObjectContext:(id)a0 includedObjectIDs:(id)a1 excludedObjectIDs:(id)a2;
- (id)initWithManagedObjectContext:(id)a0 mode:(unsigned long long)a1;
- (id)initWithManagedObjectContext:(id)a0 mode:(unsigned long long)a1 tagOperator:(unsigned long long)a2;
- (BOOL)isEqualToTagSelection:(id)a0;
- (void)managedObjectContextObjectIDsDidSave:(id)a0;
- (id)rawFilterValue;
- (void)removeObjectID:(id)a0 fromExcluded:(BOOL)a1;
- (void)removeObjectIDs:(id)a0;
- (void)removeUnresolvedTagIdentifier:(id)a0 fromExcluded:(BOOL)a1;
- (void)resolveManagedObjectsFromURLs;
- (id)shortEmptySummary;
- (id)standardizedContentsForObjectIDs:(id)a0;

@end
