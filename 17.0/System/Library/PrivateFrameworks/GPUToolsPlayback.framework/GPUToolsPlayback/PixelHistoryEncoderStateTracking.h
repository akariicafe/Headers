@class NSMutableDictionary;

@interface PixelHistoryEncoderStateTracking : NSObject

@property (nonatomic) unsigned int encoderFunctionIndex;
@property (retain, nonatomic) NSMutableDictionary *filteredGenerationOptions;
@property (nonatomic) unsigned int lastInterestingFunctionIndex;
@property (retain, nonatomic) NSMutableDictionary *encoderStateFunctionIndexes;

- (void).cxx_destruct;

@end
