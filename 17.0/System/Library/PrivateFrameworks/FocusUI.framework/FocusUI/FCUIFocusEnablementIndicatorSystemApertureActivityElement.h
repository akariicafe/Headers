@class NSString;
@protocol SAActivityHosting;

@interface FCUIFocusEnablementIndicatorSystemApertureActivityElement : FCUIFocusEnablementIndicatorSystemApertureElement <SAActivityBehavior>

@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
