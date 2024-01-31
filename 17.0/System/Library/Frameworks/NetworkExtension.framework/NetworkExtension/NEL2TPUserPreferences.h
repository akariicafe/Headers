@class NSString, NEVPNProtocolL2TP;

@interface NEL2TPUserPreferences : NSObject <NEConfigurationValidating> {
    struct __SCUserPreferencesRef { } *_userPrefs;
}

@property (readonly) NSString *identifier;
@property (retain) NSString *name;
@property (copy) NEVPNProtocolL2TP *settings;
@property (getter=isCurrent) BOOL current;
@property (readonly, getter=isForced) BOOL forced;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
