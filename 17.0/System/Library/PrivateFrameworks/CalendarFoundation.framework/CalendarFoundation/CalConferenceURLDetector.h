@interface CalConferenceURLDetector : NSObject

+ (id)logHandle;
+ (id)_linksInSource:(id)a0;
+ (BOOL)_isValidTelURL:(id)a0;
+ (BOOL)isPreferredURL:(id)a0;
+ (id)_URLDataDetector;
+ (id)_URLsInSource:(id)a0;
+ (id)_dataDetector;
+ (id)_firstPhoneNumberInSource:(id)a0;
+ (id)_googleMeetSuffix;
+ (BOOL)_hasDisallowedPathExtension:(id)a0;
+ (BOOL)_hasValidPath:(id)a0;
+ (BOOL)_isGoogleMeetURL:(id)a0;
+ (id)_phoneNumberDataDetector;
+ (id)_preferredHostSuffixes;
+ (id)conferenceURLFromSources:(id)a0;
+ (id)googleMeetURLsAndPhoneNumbersFromSource:(id)a0;
+ (BOOL)isTUConversationLink:(id)a0;

@end
