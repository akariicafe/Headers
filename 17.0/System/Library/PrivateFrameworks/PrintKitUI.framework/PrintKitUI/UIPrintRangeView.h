@class NSArray, UIPrintInfo, NSString, UIView, UIPickerView, UITableView;

@interface UIPrintRangeView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *pickerView;
@property (retain, nonatomic) UIPickerView *fromPicker;
@property (retain, nonatomic) UIPickerView *toPicker;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *savedMultiPageRanges;
@property (nonatomic) double pickerWidth;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)loadViews;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)reloadTableView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 printInfo:(id)a1;
- (void)updatePageRangeView;

@end
