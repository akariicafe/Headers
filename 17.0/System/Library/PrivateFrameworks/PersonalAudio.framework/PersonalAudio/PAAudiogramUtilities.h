@interface PAAudiogramUtilities : NSObject

+ (id)normalizedOffsetsFromAudiogram:(id)a0;
+ (struct { unsigned int x0; unsigned int x1; })entryFromData:(id)a0 atIndex:(unsigned int)a1;
+ (id)presetFrequencies;
+ (id)ptaFrequencies;

@end
