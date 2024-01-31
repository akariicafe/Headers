@interface CoreODIEssentials.ODINFHardwareMonitor : SwiftNativeNSObject <NFHardwareEventListener> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void)hardwareStateDidChange;

@end
