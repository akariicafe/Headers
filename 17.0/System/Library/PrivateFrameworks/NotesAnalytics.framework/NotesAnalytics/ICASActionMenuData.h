@class NSString, ICASActionMenuUsageType, ICASActionMenuContextType;

@interface ICASActionMenuData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASActionMenuUsageType *actionMenuUsageType;
@property (readonly, nonatomic) ICASActionMenuContextType *actionMenuContextType;
@property (readonly, nonatomic) NSString *actionMenuSelection;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithActionMenuUsageType:(id)a0 actionMenuContextType:(id)a1 actionMenuSelection:(id)a2;

@end
