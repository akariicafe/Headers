@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary *_enableFlags;
}

+ (id)sharedManager;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 forSubTestWithName:(id)a1;
- (BOOL)isEnabledForSubTestWithName:(id)a0;

@end
