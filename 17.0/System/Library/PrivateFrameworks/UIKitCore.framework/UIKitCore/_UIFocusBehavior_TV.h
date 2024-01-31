@class NSString;

@interface _UIFocusBehavior_TV : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)showsFocusRingForItem:(id)a0;
- (long long)focusDeferral;
- (BOOL)supportsIndirectRotaryMovement;
- (double)stabilizedLinearFocusMovementTimeout;
- (long long)buttonSelectionMode;
- (unsigned long long)focusGroupContainmentBehavior;
- (id)init;
- (long long)focusSystemDeactivationMode;
- (void)dealloc;
- (BOOL)textViewCanBecomeFocused:(id)a0;
- (long long)focusCastingMode;
- (long long)scrollingMode;
- (BOOL)supportsLinearMovementDebugOverlay;
- (BOOL)shouldEnableFocusOnSelect;
- (BOOL)includesContentScrollViewInPreferredFocusEnvironments;
- (BOOL)honorsFocusSystemEnabledInfoPlistKey;
- (BOOL)supportsClipToBounds;
- (BOOL)supportsGameControllers;
- (BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)a0;
- (long long)deliverKeyEventsToFocusEngine;
- (unsigned long long)defaultFocusScrollOffsetResolver;
- (long long)requiredInputDevices;
- (BOOL)supportsTabKey;
- (long long)indirectMovementPriority;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)shouldCallAccessibilityOverrides;
- (long long)skipKeyCommandsForKeyEvents;
- (unsigned long long)focusGroupMovementBehavior;
- (long long)cellFocusability;
- (BOOL)supportsParentFocusRings;
- (BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)a0;
- (long long)focusRingVisibility;
- (BOOL)supportsArrowKeys;
- (BOOL)tabBarButtonCanBecomeFocused;
- (BOOL)autoDismissesPopoverControllersOnFocusIntersection;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)shouldConvertIndirectTapsIntoArrowKeys;
- (BOOL)tabBarCanBecomeFocused;
- (BOOL)searchBarTextFieldCanBecomeFocused;
- (BOOL)supportsIndirectPanningMovement;
- (BOOL)wantsTreeLocking;
- (BOOL)refinesIndexBarTargetContentOffset;
- (BOOL)tabBasedMovementLoops;
- (BOOL)syncsFocusAndResponder;
- (BOOL)preventsCellFocusabilityWhileEditing;
- (BOOL)controlCanBecomeFocused:(id)a0;
- (BOOL)supportViewTransparencyAndMultipleWindows;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (long long)pageButtonScrollingStyle;
- (BOOL)wantsFocusSystemForScene:(id)a0;
- (BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (BOOL)shouldSupressIndirectMovementOnSelect;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
- (void)_handleRemoteTouchSurfaceTypeDidChangeNotification:(id)a0;

@end
