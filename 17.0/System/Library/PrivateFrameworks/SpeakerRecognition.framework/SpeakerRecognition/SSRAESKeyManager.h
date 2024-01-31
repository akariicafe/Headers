@interface SSRAESKeyManager : NSObject

+ (BOOL)deleteAESKeyWithApplicationTag:(id)a0 keyLabel:(id)a1;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)a0;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)a0 applicationTag:(id)a1 keyLabel:(id)a2 shouldGenerateIfNecessary:(BOOL)a3;
+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)a0 keyLabel:(id)a1;
+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)a0 keyLabel:(id)a1;
+ (id)getVoiceTriggerProfilesAESKey;
+ (BOOL)storeAESKeyInKeychain:(id)a0 applicationTag:(id)a1 keyLabel:(id)a2;

@end
