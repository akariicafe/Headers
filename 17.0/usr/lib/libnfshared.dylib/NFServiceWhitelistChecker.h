@class NSString, NSOrderedSet, NSMutableOrderedSet, NSMutableArray;

@interface NFServiceWhitelistChecker : NSObject <NSCopying> {
    NSMutableArray *_iso15693TagAccessFilters;
    NSString *_clientName;
    BOOL _iso15693ReaderAccess;
    BOOL _vasReaderAccess;
    BOOL _ndefReaderAccess;
    BOOL _tagReaderAccess;
    NSMutableOrderedSet *_trustedISO7816AidList;
    int _clientProcessIdentifier;
}

@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL internalAccess;
@property (readonly, nonatomic) BOOL nfcISO15693ReaderAccess;
@property (readonly, nonatomic) BOOL seshatAccess;
@property (readonly, nonatomic) BOOL miniNVWriteAccess;
@property (readonly, nonatomic) BOOL lpmFactoryTest;
@property (readonly, nonatomic) BOOL remoteAdminAccess;
@property (readonly, nonatomic) BOOL nfcNDEFReaderAccess;
@property (readonly, nonatomic) BOOL allowBackgroundedSession;
@property (readonly, nonatomic) BOOL ignoreAppStateMonitor;
@property (readonly, nonatomic) double sessionTimeLimit;
@property (readonly, retain, nonatomic) NSString *readerPurposeString;
@property (readonly, nonatomic) BOOL nfcTagReaderAccess;
@property (readonly, nonatomic) BOOL nfcTagReaderPACEPollingAllow;
@property (readonly, nonatomic) BOOL nfcVASReaderAccess;
@property (readonly, retain, nonatomic) NSOrderedSet *trustedISO7816AidList;
@property (readonly, nonatomic) BOOL externalReaderAccessAllow;
@property (readonly, nonatomic) BOOL useUnfilteredApplets;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL singleUserAccess;
@property (readonly, nonatomic) BOOL purpleTrustAccess;
@property (readonly, nonatomic) BOOL surfSessionAccess;
@property (readonly, nonatomic) BOOL eCommerceAccess;
@property (readonly, nonatomic) BOOL seSessionAccess;
@property (readonly, nonatomic) BOOL seLoggingSessionAccess;
@property (readonly, nonatomic) BOOL lpemConfigSessionAccess;
@property (readonly, nonatomic) BOOL readerInternalAccess;
@property (readonly, nonatomic) BOOL cardModeAccess;
@property (readonly, nonatomic) BOOL hceAccess;
@property (readonly, nonatomic) BOOL radioToggle;
@property (readonly, nonatomic) BOOL pollingProfileUpdate;
@property (readonly, nonatomic) BOOL dontResetAssertion;
@property (readonly, nonatomic) BOOL bgTagReadingAssertion;
@property (readonly, nonatomic) BOOL chAssertion;

- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)a0;
- (BOOL)_isAIDStringValid:(id)a0;
- (BOOL)_boolValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (void)_initCoreNFCEntitlements:(id)a0 secTask:(struct __SecTask { } *)a1;
- (id)_arrayValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (id)initWithConnection:(id)a0;
- (void)_initTagSpecifier:(id)a0 maximumFilterStringLength:(unsigned long long)a1;
- (void *)_copyValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (id)description;
- (void)_initISO15693TagSpecifier:(id)a0;
- (id)_stringValueOfEntitlement:(id)a0 secTask:(struct __SecTask { } *)a1;
- (void)_initISO7816PermissibleAIDListWithSecTask:(struct __SecTask { } *)a0 infoPlist:(id)a1;
- (id)_stringFromArray:(id)a0;
- (void).cxx_destruct;
- (id)_stringFromISO15693AccessFilterList;
- (id)getAppInfoDictionary;
- (unsigned int)validateISO15693TagAcesssWithUID:(id)a0;
- (id)initWithConnection:(id)a0 coreNFCConnection:(BOOL)a1;
- (id)_createAccessDictionaryFromICCode:(id)a0 serialNumber:(id)a1 maximumFilterStringLength:(unsigned long long)a2;
- (unsigned int)validateISO15693TagAccessWithManufacturerCode:(unsigned long long)a0 serialNumber:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
