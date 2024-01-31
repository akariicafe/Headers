@class NSString, NSMutableSet;
@protocol CSBackgroundContentActionManagerDelegate, SBFActionProviding;

@interface CSBackgroundContentActionManager : NSObject <SBFActionHandling> {
    id<SBFActionProviding> _contentActionProvider;
}

@property (weak, nonatomic) id<CSBackgroundContentActionManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *activeActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentActionProvider:(id)a0;
- (BOOL)_addAction:(id)a0;
- (BOOL)handlesActionWithClass:(Class)a0;
- (void)_removeAction:(id)a0;
- (BOOL)handleAction:(id)a0 forProvider:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)validActionWithIdentifierIfExists:(id)a0;

@end
