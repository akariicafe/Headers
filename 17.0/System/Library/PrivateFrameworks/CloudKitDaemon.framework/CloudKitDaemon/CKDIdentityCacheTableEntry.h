@class CKUserIdentity, NSString, NSNumber, CKUserIdentityLookupInfo;

@interface CKDIdentityCacheTableEntry : CKSQLiteCacheTableEntry

@property (retain, nonatomic) NSNumber *rowid;
@property (retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSString *dataSeparationHash;
@property (retain, nonatomic) CKUserIdentity *identity;

- (void).cxx_destruct;

@end
