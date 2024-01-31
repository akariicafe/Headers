@class NSOrderedSet, NSString;

@interface _UIDiffableDataSourceUpdate : NSObject <_UIDiffableDataSourceUpdate>

@property (readonly, nonatomic) BOOL isSectionOperation;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL shouldReconfigure;
@property (readonly, nonatomic) BOOL isDeleteAll;
@property (readonly, nonatomic) long long relativePosition;
@property (readonly, nonatomic) id destinationIdentifier;
@property (readonly, nonatomic) BOOL destinationIdentifierIsSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateDeleteAll;

- (void)_throwIfInvalid;
- (id)initWithIdentifiers:(id)a0 sectionIdentifiers:(id)a1 action:(long long)a2 desinationIdentifier:(id)a3 relativePosition:(long long)a4 destinationIsSection:(BOOL)a5;
- (id)initWithSectionIdentifiers:(id)a0 action:(long long)a1 destinationIdentifier:(id)a2 relativePosition:(long long)a3;
- (id)initWithReconfiguredItemIdentifiers:(id)a0;
- (id)initWithSectionIdentifiers:(id)a0 action:(long long)a1;
- (id)initWithItemIdentifiers:(id)a0 action:(long long)a1 destinationIdentifier:(id)a2 relativePosition:(long long)a3;
- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 appendingToDestinationSectionIdentifier:(id)a1;
- (id)initWithSectionIdentifiers:(id)a0 appendingToDestinationSectionIdentifier:(id)a1;
- (id)initWithItemIdentifiers:(id)a0 action:(long long)a1;

@end
