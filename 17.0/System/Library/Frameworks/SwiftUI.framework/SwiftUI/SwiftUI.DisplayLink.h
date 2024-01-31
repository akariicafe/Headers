@interface SwiftUI.DisplayLink : NSObject {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ link;
    void /* unknown type, empty encoding */ nextUpdate;
    void /* unknown type, empty encoding */ currentUpdate;
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ reasons;
    void /* unknown type, empty encoding */ currentThread;
    void /* unknown type, empty encoding */ nextThread;
}

+ (void)asyncThreadWithArg:(id)a0;

- (id)init;
- (void)displayLinkTimer:(id)a0;
- (void).cxx_destruct;

@end
