@class NSString, MPSectionedIdentifierListEntryPositionKey, NSMutableArray;

@interface MPSectionedIdentifierListEntry : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MPSectionedIdentifierListEntryPositionKey *positionKey;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *hostedSectionIdentifier;
@property (readonly, nonatomic) NSMutableArray *nextEntries;
@property (weak, nonatomic) MPSectionedIdentifierListEntry *previousEntry;
@property (nonatomic) long long branchDepth;
@property (readonly, nonatomic, getter=isDataSourceRemoved) BOOL dataSourceRemoved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long entryType;

- (void)encodeWithCoder:(id)a0;
- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addBranch:(id)a0 forceBranchDepthIncrease:(BOOL)a1;
- (void)addNextEntry:(id)a0;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)a0;
- (id)initWithPositionKey:(id)a0 sectionIdentifier:(id)a1;
- (id)itemResult;
- (void)prepareForDealloc;
- (void)setDataSourceRemoved;
- (id)trackingEntryResult;

@end
