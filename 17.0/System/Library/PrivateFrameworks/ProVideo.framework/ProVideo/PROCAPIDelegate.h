@interface PROCAPIDelegate : NSObject {
    void /* function */ *callback;
    void *userData;
}

- (void)plugInManager:(id)a0 didLoadPlugIn:(id)a1;

@end
