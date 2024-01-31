@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequestForPairingIdentity:(id)a0 error:(id *)a1;
+ (id)createListPairingsRequest:(id *)a0;
+ (id)createRemovePairingRequestForPairingIdentity:(id)a0 error:(id *)a1;
+ (BOOL)parseAddPairingResponse:(id)a0 error:(id *)a1;
+ (id)parseListPairingsResponse:(id)a0 error:(id *)a1;
+ (BOOL)parseRemovePairingResponse:(id)a0 error:(id *)a1;

@end
