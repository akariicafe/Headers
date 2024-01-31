@interface AXAssistiveTouchServer : AXServer

+ (id)server;

- (BOOL)home;
- (void)_willClearServer;
- (id)menuItems;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (void)virtualPointer:(BOOL)a0;
- (void)closeMenu;
- (struct CGPoint { double x0; double x1; })getNubbitPosition;
- (struct CGPoint { double x0; double x1; })getPointerPosition;
- (BOOL)isMenuOpen;
- (void)menuAction:(id)a0;
- (void)openMenu;
- (void)setNubbitPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)setPointerPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tapMenuItem:(id)a0 down:(BOOL)a1;

@end
