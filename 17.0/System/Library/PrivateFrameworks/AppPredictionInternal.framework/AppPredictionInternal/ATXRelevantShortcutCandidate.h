@class NSString, NSArray;

@interface ATXRelevantShortcutCandidate : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ donationBundleIdentifier;
    void /* unknown type, empty encoding */ relevantContexts;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ widgetDescriptor;
@property (nonatomic, readonly) NSString *donationBundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ intent;
@property (nonatomic, readonly) NSArray *relevantContexts;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithWidgetDescriptor:(id)a0 donationBundleIdentifier:(id)a1 intent:(id)a2 relevantContexts:(id)a3;

@end
