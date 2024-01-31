@class NSString;

@interface CAMExpandingControlTextMenuItem : CAMExpandingControlMenuItem

@property (readonly, nonatomic) NSString *titleText;

+ (id)menuItemWithState:(id)a0 titleText:(id)a1 subtitle:(id)a2 selectedSubtitle:(id)a3 configuration:(id)a4;

- (void).cxx_destruct;
- (BOOL)isEqualToItem:(id)a0;

@end
