@class NSUserDefaults;

@interface VKKeyboardCameraDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (class, readonly) VKKeyboardCameraDefaults *sharedInstance;

- (id)init;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;

@end
