@class NSString, UITextView;

@interface CKDetailsExpanseActivityHeaderView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView>

@property (retain, nonatomic) UITextView *expanseActivityTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
