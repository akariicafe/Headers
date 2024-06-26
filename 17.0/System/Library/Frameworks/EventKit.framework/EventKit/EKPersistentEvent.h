@interface EKPersistentEvent : EKPersistentCalendarItem

+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)eventWithRandomUUID;

- (BOOL)firedTTL;
- (void)setTravelTime:(id)a0;
- (id)travelTime;
- (id)specialDayString;
- (void)setEndDateRaw:(id)a0;
- (id)birthdayContactName;
- (BOOL)disallowProposeNewTime;
- (void)setBirthdayContactIdentifier:(id)a0;
- (void)setCanForward:(BOOL)a0;
- (id)image;
- (id)organizer;
- (void)setActions:(id)a0;
- (id)endDateRaw;
- (id)originalStartDate;
- (void)setLocationPredictionState:(long long)a0;
- (id)conferenceURLString;
- (id)endDate;
- (void)setProposedStartDate:(id)a0;
- (void)setTravelAdvisoryBehavior:(long long)a0;
- (void)setOriginalStartDate:(id)a0;
- (id)participationStatusModifiedDate;
- (id)conferenceURLDetectedString;
- (id)actions;
- (void)setAvailability:(long long)a0;
- (long long)status;
- (BOOL)canForward;
- (id)suggestionInfo;
- (id)proposedStartDate;
- (long long)locationPredictionState;
- (void)setExternalTrackingStatus:(int)a0;
- (void)setSuggestionInfo:(id)a0;
- (int)entityType;
- (id)recurrenceSet;
- (long long)privacyLevel;
- (long long)availability;
- (id)description;
- (void)setJunkStatus:(unsigned long long)a0;
- (void)setConferenceURLString:(id)a0;
- (void)setInvitationChangedProperties:(unsigned int)a0;
- (void)setSpecialDayString:(id)a0;
- (void)setParticipationStatusModifiedDate:(id)a0;
- (void)setBirthdayID:(id)a0;
- (void)setDisallowProposeNewTime:(BOOL)a0;
- (void)setEndDate:(id)a0;
- (void)setImage:(id)a0;
- (void)setBirthdayContactName:(id)a0;
- (void)setRecurrenceSet:(id)a0;
- (unsigned int)invitationChangedProperties;
- (void)setFiredTTL:(BOOL)a0;
- (void)setInvitationStatus:(unsigned long long)a0;
- (void)setConferenceURLDetectedString:(id)a0;
- (id)responseComment;
- (unsigned long long)junkStatus;
- (int)externalTrackingStatus;
- (long long)travelAdvisoryBehavior;
- (void)setStatus:(long long)a0;
- (id)birthdayID;
- (void)setPrivacyLevel:(long long)a0;
- (void)setResponseComment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)invitationStatus;
- (id)birthdayContactIdentifier;

@end
