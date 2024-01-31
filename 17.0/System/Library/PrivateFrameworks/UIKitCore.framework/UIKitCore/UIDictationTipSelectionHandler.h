@class NSString;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipSelectionHandler : NSObject

@property (retain, nonatomic) NSString *selectionText;
@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;

- (void)signalSelectedText:(id)a0;
- (void)finalizeSelectionTip;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
