@class NSArray, NSSet;

@interface CHSWidgetExtensionSet : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ widgetExtensionContainers;
    void /* unknown type, empty encoding */ equivalentBundleIdentifierResolver;
    void /* unknown type, empty encoding */ iconResolver;
}

@property (nonatomic, copy) NSArray *widgetExtensionContainers;
@property (nonatomic, readonly) NSSet *allExtensions;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithExtensions:(id)a0 equivalentBundleIdentifierResolver:(id)a1 iconResolver:(id)a2;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)a0;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)a0;

@end
