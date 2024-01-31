@class NSString, NSUserDefaults;

@interface HDMenstrualCyclesPlugin : NSObject <HDPlugin, HDTaskServerClassProvider> {
    NSUserDefaults *_userDefaults;
}

@property (readonly, copy, nonatomic) NSString *pluginIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)extensionForProfile:(id)a0;
- (id)taskServerClasses;
- (id)extensionForHealthDaemon:(id)a0;
- (void).cxx_destruct;
- (void)handleDatabaseObliteration;
- (id)initWithLocalUserDefaults:(id)a0;

@end
