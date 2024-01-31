@class NSString;

@interface WFOpenAppAction : WFAction <WFStandaloneShortcutAction>

@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
