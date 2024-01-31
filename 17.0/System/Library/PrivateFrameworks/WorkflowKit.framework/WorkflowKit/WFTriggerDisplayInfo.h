@class NSString, NSArray;

@interface WFTriggerDisplayInfo : NSObject

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSArray *actionIcons;
@property (readonly, nonatomic) Class triggerClass;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 localizedDescription:(id)a1 actionIcons:(id)a2 triggerClass:(Class)a3;

@end
