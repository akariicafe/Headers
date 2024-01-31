@class NSString, NSNumber;

@interface HUAvailableRelatedTriggerItemModuleContext : NSObject <HUAvailableRelatedTriggerItemModuleContextProviding>

@property (nonatomic) BOOL showsIcons;
@property (nonatomic) BOOL hidesAddAutomationItem;
@property (nonatomic) BOOL commitsAutomatically;
@property (nonatomic) BOOL itemsAreEditable;
@property (nonatomic) BOOL hidesCustomTriggers;
@property (nonatomic) unsigned long long errorHandlingStrategy;
@property (nonatomic) BOOL showNaturalLightingItem;
@property (retain, nonatomic) NSString *analyticsPresentationContext;
@property (retain, nonatomic) NSNumber *defaultActiveValue;
@property (nonatomic) unsigned long long engineOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
