@class NSString, NSHashTable, WBSFluidProgressController, SFWebExtensionButtonConfiguration;
@protocol WBSFluidProgressStateSource;

@interface SFNavigationBarItem : NSObject {
    BOOL _temporarilySuppressText;
    NSHashTable *_observers;
    BOOL _showsReaderAvailabilityTextWhenReplacingDomain;
    BOOL _showsTranslationAvailabilityTextWhenReplacingDomain;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textWhenExpanded;
@property (readonly, nonatomic) unsigned long long startIndexOfTextInExpandedText;
@property (copy, nonatomic) NSString *customPlaceholderText;
@property (nonatomic) BOOL showsLockIcon;
@property (nonatomic) BOOL showsSearchIndicator;
@property (nonatomic) BOOL showsStopReloadButtons;
@property (nonatomic) BOOL stopReloadButtonShowsStop;
@property (nonatomic) BOOL showsPageFormatButton;
@property (nonatomic) BOOL readerButtonSelected;
@property (nonatomic) BOOL showsReaderButton;
@property (readonly, nonatomic) BOOL didFinishShowingReaderAvailabilityLabel;
@property (readonly, nonatomic) BOOL didFinishShowingTranslationAvailabilityLabel;
@property (nonatomic) BOOL showsTranslationButton;
@property (nonatomic) BOOL showsTranslationIcon;
@property (nonatomic) BOOL showsSiriReaderPlayingIcon;
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (nonatomic) BOOL extensionsAreActive;
@property (nonatomic) BOOL needsExtensionBadge;
@property (retain, nonatomic) SFWebExtensionButtonConfiguration *extensionButtonConfiguration;
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning;
@property (retain, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak) id<WBSFluidProgressStateSource> fluidProgressStateSource;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (readonly, nonatomic) long long securityAnnotation;
@property (readonly, nonatomic) BOOL showsSecurityAnnotation;
@property (readonly, nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;
@property (nonatomic) long long lockdownModeAnnotation;
@property (readonly, nonatomic) BOOL menuButtonSelected;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)setSecurityAnnotation:(long long)a0;
- (void)setDidFinishShowingAvailabilityLabel:(BOOL)a0 ofType:(long long)a1;
- (void)setShowsTranslationButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;
- (BOOL)_showsAvailabilityTextForType:(long long)a0 style:(long long)a1;
- (void)setTemporarilySuppressText:(BOOL)a0;
- (BOOL)showsReaderAvailabilityTextForStyle:(long long)a0;
- (BOOL)showsTranslationAvailabilityTextForStyle:(long long)a0;
- (void)setShowsReaderButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSecurityAnnotation:(long long)a0 hasFocusedInputFieldOnCurrentPage:(BOOL)a1;
- (void)setText:(id)a0 textWhenExpanded:(id)a1 startIndex:(unsigned long long)a2;
- (void)addObserver:(id)a0;

@end
