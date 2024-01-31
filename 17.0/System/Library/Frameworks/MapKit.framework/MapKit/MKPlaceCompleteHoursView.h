@class NSLayoutConstraint, NSArray, NSString, GEOLinkedService, UIView, UIImageView, _MKUILabel;

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    UIView *_containerViewForHoursAndCategoryName;
    UIImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
}

@property (retain, nonatomic) NSArray *placeHoursViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setUpConstraints;
- (void)hoursViewDidUpdate:(id)a0;
- (id)initWithLinkedService:(id)a0 showTodaysHoursOnly:(BOOL)a1;

@end
