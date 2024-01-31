@interface CalGoogleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)_delimiterRegex;
+ (id)calConferenceSerializationHandle;

- (id)deserializeConferences:(id)a0;
- (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)a0;

@end
