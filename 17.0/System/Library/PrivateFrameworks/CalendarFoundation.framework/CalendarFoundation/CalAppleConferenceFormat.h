@interface CalAppleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)_buildDeserializationResultFromState:(id)a0;
+ (id)_conferenceTitleRegex;
+ (id)_detailsDelimiterRegex;
+ (id)_joinMethodTitleAndFeaturesRegex;
+ (BOOL)_line:(id)a0 matchesRegex:(id)a1 outFoundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
+ (void)_parseBlockTitle:(id)a0 state:(id)a1;
+ (void)_parseConferenceTitle:(id)a0 state:(id)a1;
+ (void)_parseJoinMethodTitleAndFeatures:(id)a0 state:(id)a1;
+ (void)_parseURL:(id)a0 state:(id)a1;
+ (id)_startDelimiterRegex;
+ (id)calBundle;
+ (id)calConferenceSerializationHandle;

- (id)deserializeConferences:(id)a0;
- (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)a0;

@end
