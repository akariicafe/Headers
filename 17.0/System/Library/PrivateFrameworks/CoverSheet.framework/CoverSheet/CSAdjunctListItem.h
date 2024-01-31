@class NSString, SBSLockScreenContentAction, NSMutableSet, UIView, UIViewController;
@protocol CSAdjunctItemHosting;

@interface CSAdjunctListItem : NSObject <BSDescriptionProviding> {
    NSMutableSet *_actions;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SBSLockScreenContentAction *action;
@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UIViewController<CSAdjunctItemHosting> *contentHost;
@property (nonatomic) BOOL animatePresentation;
@property (nonatomic) BOOL animateDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)addAction:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isValid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)removeAction:(id)a0;

@end
