@class NSString, FBSDisplayLayout, FBSDisplayLayoutPublisher;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving, FBSDisplayLayoutPublishing> {
    FBSDisplayLayoutPublisher *_publisher;
    int _displayBacklightToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)flush;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (id)addElement:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPublisher:(id)a0;
- (void)addObserver:(id)a0;
- (id)_addElement:(id)a0 forKey:(id)a1;
- (id)transitionAssertionWithReason:(id)a0;
- (void)publisher:(id)a0 didUpdateLayout:(id)a1 withTransition:(id)a2;

@end
