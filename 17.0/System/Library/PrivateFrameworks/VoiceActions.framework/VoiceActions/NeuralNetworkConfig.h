@class NSString;

@interface NeuralNetworkConfig : NSObject {
    void /* unknown type, empty encoding */ modelPath;
}

@property (nonatomic, copy) NSString *modelPath;
@property (nonatomic) void /* unknown type, empty encoding */ logThreshold;
@property (nonatomic) void /* unknown type, empty encoding */ logMinimum;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
