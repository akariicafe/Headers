@interface WFMoveToFolderCoordinator : NSObject {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ source;
}

- (id)initWithDatabase:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)move:(id)a0 presentingViewController:(id)a1;
- (void)move:(id)a0 presentingViewController:(id)a1 source:(int)a2;

@end
