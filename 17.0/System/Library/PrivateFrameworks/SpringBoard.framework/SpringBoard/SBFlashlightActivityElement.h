@class NSString;
@protocol SAActivityHosting, SBFlashlightActivityElementDelegate;

@interface SBFlashlightActivityElement : SBFlashlightElement <SAActivityBehavior>

@property (weak, nonatomic) id<SBFlashlightActivityElementDelegate> delegate;
@property (nonatomic, getter=isFlashlightOn) BOOL flashlightOn;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setPreviewing:(BOOL)a0;
- (void)_handleExpandedLeadingButtonAction;
- (BOOL)hasActivityBehavior;
- (id)initWithFlashlightOn:(BOOL)a0;
- (long long)systemApertureLayoutCustomizingOptions;

@end
