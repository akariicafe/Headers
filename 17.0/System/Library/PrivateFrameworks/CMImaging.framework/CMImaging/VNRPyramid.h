@class NSArray;

@interface VNRPyramid : NSObject

@property (readonly) NSArray *lumaLevels;
@property (readonly) NSArray *chromaLevels;

- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)a0 isForDeghosting:(BOOL)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 nLumaLevels:(unsigned long long)a4 nChromaLevels:(unsigned long long)a5 lumaStartingLevel:(unsigned long long)a6 chromaStartingLevel:(unsigned long long)a7;

@end
