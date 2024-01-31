@class NSMutableDictionary, NSUUID, NSString, UIScrollView, MUImpressionsCalculatorConfiguration;

@interface MUImpressionsCalculator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *uiElementsByIdentifiers;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (copy, nonatomic) id /* block */ observerBlock;
@property (readonly, nonatomic) NSString *debugState;
@property (readonly, nonatomic) MUImpressionsCalculatorConfiguration *configuration;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL hasImpressionElements;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_didEnterBackground:(id)a0;
- (void)_willEnterForeground:(id)a0;
- (void)_checkVisibilityForAllItemsOnDate:(id)a0;
- (void)_checkVisibilityForElement:(id)a0 onDate:(id)a1;
- (void)_handleNotification:(id)a0 withProposedActiveState:(BOOL)a1;
- (void)_logEnterForImpressionUIElement:(id)a0 usingStartDate:(id)a1;
- (void)_logExitForImpressionUIElement:(id)a0 usingExitDate:(id)a1;
- (void)_logWorkingSetWithDidBecomeVisible:(BOOL)a0;
- (void)_registerForBackgroundingNotifications;
- (id)_uiElementForIdentifier:(id)a0;

@end
