@class NSArray, NSMutableDictionary, CKDProtocolTranslator, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) CKDProtocolTranslator *privateDBTranslator;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) id /* block */ tokenResolveBlock;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (id)sourceApplicationSecondaryIdentifier;
- (id)applicationBundleIdentifierForContainerAccess;
- (void).cxx_destruct;
- (id)applicationBundleIdentifierForNetworkAttribution;
- (id)initWithOperation:(id)a0 shortTokenLookupInfos:(id)a1;
- (BOOL)sendRequestAnonymously;

@end
