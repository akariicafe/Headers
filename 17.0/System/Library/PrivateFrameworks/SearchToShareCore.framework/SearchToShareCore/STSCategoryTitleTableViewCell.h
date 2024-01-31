@class UIButton, STSCategoryResult;
@protocol STSCategoryTitleTableViewCellDelegate;

@interface STSCategoryTitleTableViewCell : UITableViewCell {
    UIButton *_clearButton;
}

@property (retain, nonatomic) STSCategoryResult *result;
@property (nonatomic) BOOL clearButtonHidden;
@property (weak, nonatomic) id<STSCategoryTitleTableViewCellDelegate> selectionDelegate;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)clearButtonPressed:(id)a0;

@end
