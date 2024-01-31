@interface MLInternalSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL restrictNeuralNetworksToUseCPUOnly;
@property BOOL restrictNeuralNetworksFromUsingANE;
@property (readonly, nonatomic) BOOL isNeuralNetworkGPUPathForbidden;

+ (id)globalSettingsFromSettings:(id)a0;
+ (id)globalSettings;
+ (BOOL)deviceHasANE;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
