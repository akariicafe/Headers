@class NSArray;

@interface GTCaptureObjects : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSArray *commandQueues;
@property (copy, nonatomic) NSArray *captureScopes;
@property (copy, nonatomic) NSArray *metalLayers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
