@class NSMutableDictionary;

@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary *_localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (id)localExtensions;
- (void)registerLocalExtension:(id)a0;
- (id)localExtensionForIdentifier:(id)a0;
- (void)deregisterLocalExtension:(id)a0;
- (void).cxx_destruct;

@end
