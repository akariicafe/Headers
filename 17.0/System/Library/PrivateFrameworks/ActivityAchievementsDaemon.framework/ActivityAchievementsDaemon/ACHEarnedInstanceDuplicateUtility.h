@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject

@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;

- (id)earnedInstancesWithoutDuplicates:(id)a0;
- (void).cxx_destruct;
- (id)initWithTemplateStore:(id)a0;
- (id)earnedInstancesLimitedByEarnLimit:(id)a0;

@end
