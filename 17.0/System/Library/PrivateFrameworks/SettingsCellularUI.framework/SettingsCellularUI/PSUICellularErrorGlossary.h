@interface PSUICellularErrorGlossary : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (id)getLogger;
- (id)messageForError:(id)a0;

@end
