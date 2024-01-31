@interface WKFullKeyboardAccessWatcher : NSObject {
    BOOL fullKeyboardAccessEnabled;
}

+ (BOOL)fullKeyboardAccessEnabled;

- (id)init;
- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)a0;

@end
