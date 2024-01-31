@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider;

- (void)dealloc;
- (id)actionManager;
- (void).cxx_destruct;
- (id)title;
- (void)contentViewWillAppear;
- (void)_configureSubtitleForAlbumListCellContentView:(id)a0;
- (void)_peopleAlbumChanged:(id)a0;
- (void)_setSubtitleForPeopleCount:(long long)a0 onAlbumListCellContentView:(id)a1;
- (id)albumListCellContentView;
- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void)reconfigure;

@end
