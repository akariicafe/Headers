@class UITableView, NSString, NTKCDetailTableViewCell, NTKFace, NTKCFaceDetailSectionHeaderView, NSMutableArray, UIViewController;
@protocol NTKCTableViewProviding;

@interface NTKCFaceDetailSectionController : NSObject

@property (weak, nonatomic) NTKFace *face;
@property (weak, nonatomic) UIViewController<NTKCTableViewProviding> *tableViewController;
@property (nonatomic) BOOL inGallery;
@property (retain, nonatomic) NTKCDetailTableViewCell *cell;
@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailSectionHeaderView *headerView;
@property (nonatomic) long long section;
@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) NSString *titleForHeader;
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL hasSpacerRow;

+ (void)registerForTableView:(id)a0;

- (void).cxx_destruct;
- (id)_groupName;
- (void)_commonInit;
- (BOOL)canSelectRow:(long long)a0;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (BOOL)_canSelectRow:(long long)a0;
- (double)_heightForSpacerRow;
- (id)_newSectionHeader;
- (id)_spacerRow;
- (void)didSelectRow:(long long)a0;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (double)heightForHeaderView;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2;

@end
