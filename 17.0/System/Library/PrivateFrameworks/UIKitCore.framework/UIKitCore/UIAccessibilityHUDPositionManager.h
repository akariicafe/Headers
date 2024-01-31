@class NSMapTable;

@interface UIAccessibilityHUDPositionManager : NSObject {
    NSMapTable *_managedHUDs;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardAvoidanceArea;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)adjustViewPropertiesForHUD:(id)a0 withReferenceView:(id)a1;
- (void)adjustViewPropertiesForHUD:(id)a0 withReferenceView:(id)a1 keyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)beginManagingPositionOfHUD:(id)a0 withReferenceView:(id)a1;
- (void)keyboardFrameDidChange:(id)a0;
- (void)stopManagingPositionOfHUD:(id)a0;
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
