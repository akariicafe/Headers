@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSArray *infosToDiscover;
@property (readonly, nonatomic) NSMutableDictionary *submittedInfos;
@property (readonly, nonatomic) BOOL adopterProvidedLookupInfos;
@property (nonatomic) BOOL wantsProtectionInfo;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1 adopterProvidedLookupInfos:(BOOL)a2;

@end
