@class NSSet, NSString;

@interface VOSOutputEvent : NSObject {
    NSString *_rawValue;
}

@property (class, readonly, nonatomic) VOSOutputEvent *DidActivateElement;
@property (class, readonly, nonatomic) VOSOutputEvent *NoResultsFound;
@property (class, readonly, nonatomic) VOSOutputEvent *DidFocusOnElement;
@property (class, readonly, nonatomic) VOSOutputEvent *DidFocusOnScreenRecognitionElement;
@property (class, readonly, nonatomic) VOSOutputEvent *DidScrollByPage;
@property (class, readonly, nonatomic) VOSOutputEvent *BoundaryEncountered;
@property (class, readonly, nonatomic) VOSOutputEvent *NoItemExists;
@property (class, readonly, nonatomic) VOSOutputEvent *IsInteractable;
@property (class, readonly, nonatomic) VOSOutputEvent *InteractIn;
@property (class, readonly, nonatomic) VOSOutputEvent *InteractOut;
@property (class, readonly, nonatomic) VOSOutputEvent *DidSelectAutofill;
@property (class, readonly, nonatomic) VOSOutputEvent *DidBeginPassthrough;
@property (class, readonly, nonatomic) VOSOutputEvent *DidSelectPreviousRotor;
@property (class, readonly, nonatomic) VOSOutputEvent *DidSelectNextRotor;
@property (class, readonly, nonatomic) VOSOutputEvent *PreviousRotorProgress;
@property (class, readonly, nonatomic) VOSOutputEvent *NextRotorProgress;
@property (class, readonly, nonatomic) VOSOutputEvent *DidEnterSecureText;
@property (class, readonly, nonatomic) VOSOutputEvent *DidChangeTextSelectionDirection;
@property (class, readonly, nonatomic) VOSOutputEvent *UnknownCommand;
@property (class, readonly, nonatomic) VOSOutputEvent *DidRecognizeMLContent;
@property (class, readonly, nonatomic) VOSOutputEvent *DidEnterTargetArea;
@property (class, readonly, nonatomic) VOSOutputEvent *DidLeaveTargetArea;
@property (class, readonly, nonatomic) VOSOutputEvent *DidSyncWithSystemFocus;
@property (class, readonly, nonatomic) VOSOutputEvent *DidEnterTouchContainer;
@property (class, readonly, nonatomic) VOSOutputEvent *DidChangeVolume;
@property (class, readonly, nonatomic) VOSOutputEvent *DidReorderItem;
@property (class, readonly, nonatomic) VOSOutputEvent *DidWrapBackwards;
@property (class, readonly, nonatomic) VOSOutputEvent *DidWrapForwards;
@property (class, readonly, nonatomic) VOSOutputEvent *DidEnableQuickNav;
@property (class, readonly, nonatomic) VOSOutputEvent *DidDisableQuickNav;
@property (class, readonly, nonatomic) VOSOutputEvent *TVDidBeginInteractionWithRotor;
@property (class, readonly, nonatomic) VOSOutputEvent *TVDidEndInteractionWithRotor;
@property (class, readonly, nonatomic) VOSOutputEvent *AlertDidAppear;
@property (class, readonly, nonatomic) VOSOutputEvent *NotificationDidAppear;
@property (class, readonly, nonatomic) VOSOutputEvent *PopoverDidAppear;
@property (class, readonly, nonatomic) VOSOutputEvent *AutofillDidAppear;
@property (class, readonly, nonatomic) VOSOutputEvent *AutofillDidDismiss;
@property (class, readonly, nonatomic) VOSOutputEvent *ItemIsLoading;
@property (class, readonly, nonatomic) VOSOutputEvent *ItemDidLoad;
@property (class, readonly, nonatomic) VOSOutputEvent *ScreenDidTurnOff;
@property (class, readonly, nonatomic) VOSOutputEvent *InsertionPointDidMove;
@property (class, readonly, nonatomic) VOSOutputEvent *KeyboardAppeared;
@property (class, readonly, nonatomic) VOSOutputEvent *KeyboardDisappeared;
@property (class, readonly, nonatomic) VOSOutputEvent *ItemMemorizationSucceeded;
@property (class, readonly, nonatomic) VOSOutputEvent *ScreenDidChange;
@property (class, readonly, nonatomic) VOSOutputEvent *CollaborationOccurred;
@property (class, readonly, nonatomic) VOSOutputEvent *FolderWillOpen;
@property (class, readonly, nonatomic) VOSOutputEvent *FolderDidOpen;
@property (class, readonly, nonatomic) VOSOutputEvent *FolderDidClose;
@property (class, readonly, nonatomic) VOSOutputEvent *BrailleDisplayConnected;
@property (class, readonly, nonatomic) VOSOutputEvent *BrailleDisplayDisconnected;
@property (class, readonly, nonatomic) VOSOutputEvent *ItemMemorizationFailed;
@property (class, readonly, nonatomic) VOSOutputEvent *ItemMemorizationInProgress;
@property (class, readonly, nonatomic) VOSOutputEvent *DockDidAppear;
@property (class, readonly, nonatomic) VOSOutputEvent *DockDidDisappear;
@property (class, readonly, nonatomic) VOSOutputEvent *ReachabilityDidBegin;
@property (class, readonly, nonatomic) VOSOutputEvent *ReachabilityDidEnd;
@property (class, readonly, nonatomic) VOSOutputEvent *TouchIDAuthenticated;
@property (class, readonly, nonatomic) VOSOutputEvent *TouchIDFailed;
@property (class, readonly, nonatomic) VOSOutputEvent *SensitiveContent;
@property (class, readonly, nonatomic) NSSet *allOutputEvents;

@property (nonatomic) BOOL supportsSoundEffect;
@property (nonatomic) BOOL supportsHaptic;
@property (readonly, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)eventWithStringValue:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initOutputEventWithRawValue:(id)a0 supportsSoundEffect:(BOOL)a1 supportsHaptic:(BOOL)a2;

@end
