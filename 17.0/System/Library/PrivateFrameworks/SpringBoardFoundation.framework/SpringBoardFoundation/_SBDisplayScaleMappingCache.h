@class NSString, NSMutableDictionary, FBDisplayManager;

@interface _SBDisplayScaleMappingCache : NSObject <FBSDisplayObserving> {
    NSMutableDictionary *_hardwareIdentifierToMappings;
    FBDisplayManager *_displayManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)cacheMapping:(id)a0;
- (id)mappingForDisplayIdentifier:(id)a0;

@end
