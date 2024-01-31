@class NSArray, NSString;

@interface PXConcreteAudioAssetEntryPoint : NSObject <PXAudioAssetEntryPoint>

@property (readonly, nonatomic) double time;
@property (readonly, copy, nonatomic) NSArray *fadeInKeyTimeOffsets;
@property (readonly, copy, nonatomic) NSArray *fadeInKeyGainValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (float)fadeInGainAtOffset:(double)a0;
- (id)initWithTime:(double)a0 fadeInKeyTimeOffsets:(id)a1 fadeInKeyGainValues:(id)a2;

@end
