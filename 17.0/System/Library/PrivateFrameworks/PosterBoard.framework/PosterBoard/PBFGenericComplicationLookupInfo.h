@class INIntent, NSString, ATXComplication, NSNumber;

@interface PBFGenericComplicationLookupInfo : NSObject <PBFComplicationLookupInfo, NSCopying> {
    unsigned long long _hash;
}

@property (readonly, copy, nonatomic) NSNumber *complicationWidgetFamily;
@property (readonly, copy, nonatomic) NSString *complicationExtensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *complicationContainingBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *complicationWidgetKind;
@property (readonly, copy, nonatomic) INIntent *complicationIntent;
@property (readonly, copy, nonatomic) ATXComplication *suggestedComplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)complicationLookupForWidgetFamily:(id)a0 extensionBundleIdentifier:(id)a1 containingBundleIdentifier:(id)a2 kind:(id)a3 intent:(id)a4 suggestedComplication:(id)a5;

@end
