@class NSString, UIView;
@protocol UIScenePresentation;

@interface CSBackgroundContentView : UIView <CSWallpaperView>

@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFullscreen:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (void)layoutSubviews;
- (void)setCoverSheetWallpaperStyle:(long long)a0;
- (id)initWithPresentationView:(id)a0;

@end
