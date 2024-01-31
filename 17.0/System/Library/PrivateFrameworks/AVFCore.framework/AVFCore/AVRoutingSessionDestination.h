@class NSArray, AVRoutingSessionDestinationInternal;

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal *_ivars;
}

@property (readonly, nonatomic) NSArray *outputDeviceDescriptions;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) BOOL providesExternalVideoPlayback;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(id *)a0;
- (id)initWithFigRoutingSessionDestination:(struct __CFDictionary { } *)a0;

@end
