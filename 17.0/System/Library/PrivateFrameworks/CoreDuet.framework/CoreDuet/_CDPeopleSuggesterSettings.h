@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying>

@property unsigned long long maxNumberOfPeopleSuggested;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainPersonIdType;
@property unsigned long long constrainMaxRecipientCount;
@property BOOL useFuture;
@property BOOL aggregateByIdentifier;
@property BOOL requireOutgoingInteraction;
@property BOOL useTitleToContrainKeywords;
@property BOOL inferActiveInteractions;
@property (retain) NSSet *ignoreContactIdentifiers;

+ (id)defaultSettings;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
