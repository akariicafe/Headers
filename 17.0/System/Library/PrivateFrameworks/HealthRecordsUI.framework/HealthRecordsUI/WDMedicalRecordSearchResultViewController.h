@class NSPredicate;
@protocol WDMedicalRecordSearchResultViewControllerDelegate;

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController

@property (weak, nonatomic) id<WDMedicalRecordSearchResultViewControllerDelegate> delegate;
@property (retain, nonatomic) NSPredicate *predicate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
