@class NSMutableDictionary;

@interface _UNNotificationContentExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions;

- (id)init;
- (void)_removeAllExtensions;
- (void)registerExtensions:(id)a0;
- (void)_addExtension:(id)a0;
- (void).cxx_destruct;
- (id)_sourceDictForSource:(id)a0;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;

@end
