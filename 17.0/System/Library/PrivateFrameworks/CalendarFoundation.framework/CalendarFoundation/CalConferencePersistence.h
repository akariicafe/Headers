@interface CalConferencePersistence : NSObject

+ (id)_htmlSerializedConference:(id)a0 serializationBlockTitle:(id)a1;
+ (id)_knownPersistenceFormats;
+ (id)deserializeConference:(id)a0;
+ (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
+ (id)updateHTML:(id)a0 withEventNotes:(id)a1;

@end
