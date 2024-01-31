@class NSString, UIView;

@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable>

@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoHeaderViewWithElement:(id)a0 existingView:(id)a1;

@end
