@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

+ (id)sharedInstance;

- (id)sessions;
- (id)sessionForIdentifier:(id)a0;
- (id)_init;
- (void)removeSessionForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addSession:(id)a0;

@end
