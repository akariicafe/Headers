@interface CUIKAttendeeDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;
+ (id)displayNameForIdentity:(id)a0;
+ (id)displayNameForIdentity:(id)a0 outFirstName:(id *)a1 outLastName:(id *)a2;
+ (id)displayNameForParticipant:(id)a0 event:(id)a1 options:(unsigned long long)a2;

@end
