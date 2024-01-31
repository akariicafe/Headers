@class NSUserDefaults;

@interface _GCDaemonSettings : NSObject {
    NSUserDefaults *_defaults;
}

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (id)anonymizedIdentifierForControllerIdentifier:(id)a0;
- (id)newAnonymizedIdentifiersDictionary:(id)a0;

@end
