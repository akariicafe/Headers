@class ICQuery, NSArray, NSString, ICFolderCustomNoteSortType, NSManagedObjectID;
@protocol ICItemIdentifier;

@interface ICVirtualSmartFolderItemIdentifier : NSObject <ICItemIdentifier>

@property (class, readonly, copy, nonatomic) NSArray *allTypes;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly, nonatomic) NSManagedObjectID *accountObjectID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *defaultTitle;
@property (copy, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) ICQuery *query;
@property (readonly, copy, nonatomic) NSString *visibilityUserDefaultsKey;
@property (nonatomic) long long visibility;
@property (readonly, copy, nonatomic) NSString *noteSortTypeUserDefaultsKey;
@property (copy, nonatomic) ICFolderCustomNoteSortType *noteSortType;
@property (readonly, copy, nonatomic) NSString *dateHeadersTypeUserDefaultsKey;
@property (nonatomic) int dateHeadersType;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic, getter=isShowingDateHeaders) BOOL showingDateHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 context:(id)a2;
- (id)initWithType:(id)a0 parentIdentifier:(id)a1;
- (id)initWithType:(id)a0 parentIdentifier:(id)a1 accountObjectID:(id)a2;
- (BOOL)isEmptyInContext:(id)a0;
- (BOOL)isHiddenInContext:(id)a0;
- (id)predicateForContext:(id)a0;
- (unsigned long long)visibleInvitationCountInContext:(id)a0;
- (unsigned long long)visibleItemCountInContext:(id)a0;
- (unsigned long long)visibleNoteCountInContext:(id)a0;

@end
