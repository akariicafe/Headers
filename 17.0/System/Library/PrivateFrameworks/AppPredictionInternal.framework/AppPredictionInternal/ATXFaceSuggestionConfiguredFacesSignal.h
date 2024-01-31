@class NSString, NSCountedSet;

@interface ATXFaceSuggestionConfiguredFacesSignal : NSObject <ATXFaceSuggestionSignal> {
    NSCountedSet *_configuredExtensionBundleIdentifiers;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
