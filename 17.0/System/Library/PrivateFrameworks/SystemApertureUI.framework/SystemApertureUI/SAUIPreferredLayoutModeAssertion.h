@class NSString, SAUILayoutModePreference;
@protocol SAElement;

@interface SAUIPreferredLayoutModeAssertion : SAAssertion <SAUILayoutModePreferring> {
    SAUILayoutModePreference *_layoutModePreference;
}

@property (readonly, weak, nonatomic) id<SAElement> representedElement;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long layoutModeChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
