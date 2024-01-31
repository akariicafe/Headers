@class NSArray, NSString, NSManagedObjectID;
@protocol ICItemIdentifier;

@interface ICFolderListSectionIdentifier : NSObject <ICSectionIdentifier>

@property (class, readonly, nonatomic) ICFolderListSectionIdentifier *systemSectionIdentifier;
@property (class, readonly, nonatomic) ICFolderListSectionIdentifier *tagSectionIdentifier;
@property (class, readonly, copy, nonatomic) NSArray *sortDescriptors;

@property (retain, nonatomic) NSManagedObjectID *accountObjectID;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly, nonatomic, getter=isCollapsible) BOOL collapsible;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)accountSectionTypeForLegacyAccount:(id)a0;
- (long long)accountSectionTypeForModernAccount:(id)a0;
- (id)initWithSectionType:(long long)a0;
- (BOOL)isEqualToICFolderListSectionIdentifier:(id)a0;

@end
