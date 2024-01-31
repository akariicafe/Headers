@interface CKVUserProfileTools : NSObject

+ (id)mapItemIdsToPriorsFromMetadata:(id)a0;
+ (id)convertRawSpeechProfile:(id)a0 metadata:(id)a1 deviceId:(id)a2 userId:(id)a3 omitItemTypes:(id)a4 error:(id *)a5;
+ (id)localeFromRawSpeechProfile:(id)a0 error:(id *)a1;
+ (id)mergeMultiUserPrimaryProfile:(id)a0 withCompanionProfiles:(id)a1 error:(id *)a2;
+ (id)parseRawSpeechProfileMetadata:(id)a0 error:(id *)a1;
+ (id)vocabularyItemsOfType:(long long)a0 fromRawSpeechProfile:(id)a1 metadata:(id)a2 error:(id *)a3;

@end
