@class NSLayoutConstraint, EKEventDetailAttendeesListView, UIImageView, NSArray, UILabel, NSObject, UIViewController;
@protocol OS_dispatch_queue, EKEventDetailAttendeeCellDelegate;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_disclosure;
    NSLayoutConstraint *_listHeight;
    EKEventDetailAttendeesListView *_attendeesListView;
    NSArray *_cachedAttendeesWithoutOrganizerAndLocations;
    NSObject<OS_dispatch_queue> *_sortAttendeesQueue;
}

@property (weak) UIViewController *viewController;
@property (weak) NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate;
@property (readonly, nonatomic) BOOL loadingAttendees;

+ (BOOL)requiresConstraintBasedLayout;

- (BOOL)update;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)_attendeesDidFinishLoadingForTest;
- (id)_attendeesListView;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_setAttendees:(id)a0;
- (double)displayHeight;
- (double)footerInset;
- (double)headerInset;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (double)listToTitle;

@end
