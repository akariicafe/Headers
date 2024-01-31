@class NSString, NSArray;
@protocol CMIInferenceNetwork;

@interface CMITiledInferenceProcessorNetworkConfig : NSObject

@property (retain, nonatomic) id<CMIInferenceNetwork> network;
@property (retain, nonatomic) NSString *networkPath;
@property (retain, nonatomic) NSArray *networkInputNames;
@property (retain, nonatomic) NSArray *networkOutputNames;

- (void).cxx_destruct;
- (BOOL)isEspressoV2Path;

@end
