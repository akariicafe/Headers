@interface MessageUI.MessageUITipsManager : NSObject {
    void /* unknown type, empty encoding */ tipObservation;
    void /* unknown type, empty encoding */ presentingController;
    void /* unknown type, empty encoding */ tipPopoverController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addToYourEmailTip;
}

+ (void)donateHasSentEmailEvent;
+ (void)donateHasUsedAttachment;
+ (void)setShouldDisplayTo:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (void)controllerDidAppear;
- (void)controllerDidDisappear;

@end
