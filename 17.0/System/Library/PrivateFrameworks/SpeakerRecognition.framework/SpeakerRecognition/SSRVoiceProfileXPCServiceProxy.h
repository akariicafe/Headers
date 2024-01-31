@interface SSRVoiceProfileXPCServiceProxy : NSObject

+ (id)sharedInstance;

- (BOOL)fetchEnrollmentStatusForSiriProfileId:(id)a0 forLanguageCode:(id)a1;

@end
