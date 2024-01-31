@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {
    NSDictionary *_payload;
    NSString *_bundleIdentifier;
    NSString *_identifier;
}

- (id)_sanitizeUnsignedInteger:(id)a0;
- (id)_sanitizeVolume:(id)a0;
- (id)_sanitizeLocalizationArgumentsArray:(id)a0;
- (unsigned long long)_interruptionLevelForString:(id)a0;
- (id)_sanitizeFlag:(id)a0;
- (void).cxx_destruct;
- (id)_sanitizeStringArray:(id)a0;
- (id)initWithIdentifier:(id)a0 payload:(id)a1 bundleIdentifier:(id)a2;
- (id)_sanitizeRelevanceScore:(id)a0;
- (id)_sanitizeTopicIdentifier:(id)a0;
- (id)_sanitizeInterruptionLevelString:(id)a0;
- (id)buildNotificationRequest;
- (id)_sanitizeAlert:(id)a0;
- (id)_sanitizeSound:(id)a0;
- (id)_sanitizeAPSDictionary:(id)a0;
- (id)buildSafePayload;

@end
