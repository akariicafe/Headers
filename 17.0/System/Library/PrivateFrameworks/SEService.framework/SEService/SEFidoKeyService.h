@interface SEFidoKeyService : NSObject

+ (id)shared;

- (id)checkFidoKeyPresence:(id)a0 usingSession:(id)a1 withSessionSEID:(id)a2 error:(id *)a3;
- (id)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 usingSession:(id)a3 withSessionSEID:(id)a4 externalizedAuth:(id)a5 error:(id *)a6;
- (id)signWithFidoKeyFor:(id)a0 challenge:(id)a1 forNFCKeyWithIdentifier:(id)a2 usingSession:(id)a3 withSessionSEID:(id)a4 externalizedAuth:(id)a5 error:(id *)a6;
- (id)verifyWithFidoKeyFor:(id)a0 signedChallenge:(id)a1 usingSession:(id)a2 withSessionSEID:(id)a3 error:(id *)a4;
- (id)checkMultipleFidoKeyPresence:(id)a0 usingSession:(id)a1 withSessionSEID:(id)a2 error:(id *)a3;
- (id)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 usingSession:(id)a3 withSessionSEID:(id)a4 error:(id *)a5;
- (BOOL)deleteFidoKeyFor:(id)a0 usingSession:(id)a1 withSessionSEID:(id)a2 error:(id *)a3;
- (id)signMultipleWithFidoKeysFor:(id)a0 challenges:(id)a1 forEndpointIdentifiers:(id)a2 usingSession:(id)a3 withSessionSEID:(id)a4 externalizedAuth:(id)a5 error:(id *)a6;

@end
