@class NSString;
@protocol SAAlertHosting;

@interface SBAlertProvidedContentElement : SBSystemApertureProvidedContentElement <SAAlertBehavior>

@property (weak, nonatomic) id<SAAlertHosting> alertHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasAlertBehavior;

@end
