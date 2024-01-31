@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)primitiveRemoveObjectForKey:(id)a0;
- (id)primitiveObjectForKey:(id)a0;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)setupAutosync;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void).cxx_destruct;
- (id)initWithApplicationID:(id)a0;
- (BOOL)synchronize;
- (struct __CFString { } *)CFApplicationID;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;

@end
