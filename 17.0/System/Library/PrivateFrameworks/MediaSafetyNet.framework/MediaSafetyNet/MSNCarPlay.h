@class MXSystemController;

@interface MSNCarPlay : NSObject {
    BOOL _carplayConnected;
    MXSystemController *_systemController;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)carplayConnected;

@end
