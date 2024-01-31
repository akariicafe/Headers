@class NSString, CHSChronoServicesConnection;

@interface CHSTimelineController : NSObject {
    CHSChronoServicesConnection *_connection;
}

@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *kind;

- (id)reloadTimeline;
- (id)initForAvocadoIdentifier:(id)a0 inBundleIdentifier:(id)a1;
- (id)reloadTimelineBudgetedWithReason:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 kind:(id)a1;
- (void).cxx_destruct;
- (id)reloadTimelineBudgeted;
- (id)reloadTimelineWithReason:(id)a0;

@end
