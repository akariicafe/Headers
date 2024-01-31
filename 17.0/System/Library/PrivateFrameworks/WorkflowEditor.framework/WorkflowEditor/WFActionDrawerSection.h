@class NSString, NSArray;

@interface WFActionDrawerSection : NSObject

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *donations;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (id)initAsLoading;
- (id)initWithLocalizedTitle:(id)a0 actions:(id)a1 donations:(id)a2 bundleIdentifier:(id)a3 sectionType:(long long)a4;

@end
