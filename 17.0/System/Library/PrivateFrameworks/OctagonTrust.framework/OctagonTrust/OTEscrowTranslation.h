@interface OTEscrowTranslation : NSObject

+ (id)CDPRecordContextToDictionary:(id)a0;
+ (id)_dateWithSecureBackupDateString:(id)a0;
+ (id)_stringWithSecureBackupDate:(id)a0;
+ (id)cdpRecoveryInformationToDictionary:(id)a0;
+ (id)dictionaryToCDPRecordContext:(id)a0;
+ (id)dictionaryToCDPRecoveryInformation:(id)a0;
+ (id)dictionaryToEscrowAuthenticationInfo:(id)a0;
+ (id)dictionaryToEscrowRecord:(id)a0;
+ (id)dictionaryToMetadata:(id)a0;
+ (id)escrowAuthenticationInfoToDictionary:(id)a0;
+ (id)escrowRecordToDictionary:(id)a0;
+ (id)metadataToDictionary:(id)a0;
+ (BOOL)supportedRestorePath:(id)a0;

@end
