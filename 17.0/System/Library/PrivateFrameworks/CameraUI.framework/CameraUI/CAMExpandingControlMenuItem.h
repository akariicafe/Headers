@class NSValue, CAMExpandingControlMenuItemConfiguration, NSString;

@interface CAMExpandingControlMenuItem : NSObject

@property (readonly, copy, nonatomic) CAMExpandingControlMenuItemConfiguration *_configuration;
@property (readonly, nonatomic) NSValue *state;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *selectedSubtitle;

+ (id)_menuItemWithState:(id)a0 subtitle:(id)a1 selectedSubtitle:(id)a2 configuration:(id)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;

@end
