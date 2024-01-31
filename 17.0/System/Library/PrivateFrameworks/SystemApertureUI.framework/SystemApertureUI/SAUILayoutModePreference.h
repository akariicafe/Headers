@class NSString;

@interface SAUILayoutModePreference : NSObject <SAUILayoutModePreferring>

@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long layoutModeChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreferredLayoutMode:(long long)a0 reason:(long long)a1;

@end
