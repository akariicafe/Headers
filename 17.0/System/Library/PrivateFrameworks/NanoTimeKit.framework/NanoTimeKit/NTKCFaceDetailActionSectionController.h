@class NTKCFaceDetailActionCell;
@protocol NTKCFaceDetailActionSectionDelegate;

@interface NTKCFaceDetailActionSectionController : NTKCFaceDetailSectionController

@property (retain, nonatomic) NTKCFaceDetailActionCell *selectCell;
@property (retain, nonatomic) NTKCFaceDetailActionCell *deleteCell;
@property (weak, nonatomic) id<NTKCFaceDetailActionSectionDelegate> delegate;

- (long long)numberOfRows;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (long long)_actionForRow:(long long)a0;
- (BOOL)_canSelectRow:(long long)a0;
- (id)_spacerCell;
- (void)didSelectRow:(long long)a0;

@end
