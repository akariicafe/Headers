@interface POTokenHelper : NSObject

+ (id)dataToHex:(id)a0;

- (void)postAHPCacheRefreshNotification;
- (id)base64URLtokenHashForUser:(id)a0;
- (id)findNameForTokenId:(id)a0 returningHash:(id *)a1 wrapHash:(id *)a2;
- (id)findTokenIdForSmartCardAMUser:(id)a0;
- (id)findTokenIdForSmartCardBoundUser:(id)a0;
- (id)getTokenInfo;
- (BOOL)insertTokenForUser:(id)a0;
- (void)removeTokenForUser:(id)a0;
- (BOOL)retrieveCertAndKeyForTokenId:(id)a0 context:(id)a1 certificate:(struct __SecCertificate **)a2 privateKey:(struct __SecKey **)a3;
- (id)tokenHashDataForUser:(id)a0;
- (id)tokenHashForUser:(id)a0;
- (BOOL)waitForTokenAvailable:(id)a0;

@end
