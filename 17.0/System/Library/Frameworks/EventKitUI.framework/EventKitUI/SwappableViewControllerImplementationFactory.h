@interface SwappableViewControllerImplementationFactory : NSObject

+ (id)calendarChooserImplWithRemoteUI:(BOOL)a0 selectionStyle:(long long)a1 displayStyle:(long long)a2 entityType:(unsigned long long)a3 forEvent:(id)a4 eventStore:(id)a5 limitedToSource:(id)a6 showIdentityChooser:(BOOL)a7 showDelegateSetupCell:(BOOL)a8 showAccountStatus:(BOOL)a9;
+ (id)calendarChooserImplWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 forEvent:(id)a3 eventStore:(id)a4 limitedToSource:(id)a5 showIdentityChooser:(BOOL)a6 showDelegateSetupCell:(BOOL)a7 showAccountStatus:(BOOL)a8;
+ (id)eventEditViewControllerImpl;
+ (id)eventEditViewControllerImplWithRemoteUI:(BOOL)a0;
+ (id)eventViewControllerImpl;
+ (id)eventViewControllerImplWithRemoteUI:(BOOL)a0;
+ (id)proposedTimeEventViewControllerImpl;
+ (BOOL)shouldUseOutOfProcessUI;

@end
