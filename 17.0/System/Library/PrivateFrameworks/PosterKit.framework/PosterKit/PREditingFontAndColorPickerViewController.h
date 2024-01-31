@class UIBarButtonItem, NSURL, PREditingTitleLayoutPickerComponentViewController, PREditingColorWellView, PREditingFontPickerComponentViewController, PREditorColorPickerConfiguration, PREditingColorPickerComponentViewController, NSString, PREditorNumberingSystemViewController, UIStackView, PREditingColorWell, NSArray, PREditingColorVariationStore, PREditorNumberingSystemPickerController, PRTitleAlignmentBarButtonItem, PRPosterTitleStyleConfiguration;
@protocol PREditingFontAndColorPickerViewControllerDelegate;

@interface PREditingFontAndColorPickerViewController : UIViewController <PREditingColorPickerComponentViewControllerDelegate, PREditingFontPickerComponentViewControllerDelegate, PREditingTitleLayoutPickerComponentViewControllerDelegate, PREditorNumberingSystemPickerControllerDelegate, PREditorNumberingSystemViewControllerDelegate, UISheetPresentationControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) PREditingColorPickerComponentViewController *colorPickerController;
@property (retain, nonatomic) PREditingColorWellView *colorWellView;
@property (retain, nonatomic) PREditingColorWell *colorWell;
@property (retain, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) BOOL hasLoadedComponentViewControllers;
@property (retain, nonatomic) UIStackView *rootStackView;
@property (retain, nonatomic) UIBarButtonItem *numberSystemBarItem;
@property (retain, nonatomic) PREditorNumberingSystemPickerController *numberingSystemController;
@property (retain, nonatomic) PRTitleAlignmentBarButtonItem *titleAlignmentBarItem;
@property (retain, nonatomic) PREditingFontPickerComponentViewController *fontPickerController;
@property (retain, nonatomic) PREditingTitleLayoutPickerComponentViewController *titleLayoutPickerController;
@property (retain, nonatomic) PREditorNumberingSystemViewController *numberingSystemViewController;
@property (copy, nonatomic) NSArray *additionalFontConfigurations;
@property (readonly, nonatomic) unsigned long long components;
@property (retain, nonatomic) PREditingColorVariationStore *colorVariationStore;
@property (retain, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (retain, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (nonatomic) double contentsLuminance;
@property (copy, nonatomic) NSURL *extensionBundleURL;
@property (weak, nonatomic) id<PREditingFontAndColorPickerViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFontIdentifiersForRole:(id)a0;
+ (id)defaultFontIdentifiersForRole:(id)a0 titleString:(id)a1;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)a0;
- (BOOL)_shouldShowWeightSliderForSelectedFont;
- (void)_signalDelegateDidFinish;
- (void)colorPickerComponentViewController:(id)a0 didSelectColorItem:(id)a1 userSelected:(BOOL)a2;
- (void)colorPickerComponentViewControllerDidChangeHeight:(id)a0;
- (void)colorWellDidUpdateColor:(id)a0;
- (double)desiredDetent;
- (void)didPressTitleAlignmentBarButtonItem:(id)a0;
- (void)fontPickerComponentViewController:(id)a0 didChangeFontWeight:(double)a1;
- (void)fontPickerComponentViewController:(id)a0 didSelectItem:(id)a1;
- (void)fontPickerComponentViewControllerDidChangeHeight:(id)a0;
- (BOOL)fontPickerComponentViewControllerShouldShowWeightSliderForSelectedFont:(id)a0;
- (id)initWithComponents:(unsigned long long)a0 role:(id)a1 titleString:(id)a2;
- (void)loadComponentViewControllersIfNeeded;
- (id)localeWithNumberingSystem:(id)a0;
- (void)numberingSystemPickerController:(id)a0 didSelectNumberingSystem:(id)a1;
- (void)numberingSystemViewController:(id)a0 didSelectNumberingSystem:(id)a1;
- (void)numberingSystemWasChanged:(id)a0 locale:(id)a1;
- (void)titleLayoutPickerComponentViewController:(id)a0 didSelectTitleLayout:(unsigned long long)a1 userSelected:(BOOL)a2;
- (void)updatePopoverContentSize;

@end
