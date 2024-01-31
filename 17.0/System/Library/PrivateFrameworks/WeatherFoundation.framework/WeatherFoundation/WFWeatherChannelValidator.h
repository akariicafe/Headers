@interface WFWeatherChannelValidator : NSObject

+ (BOOL)isLeafNodeType:(id)a0;
+ (id)expectedStructure;

- (BOOL)validateDictionary:(id)a0 expectedStructure:(id)a1;
- (BOOL)validateResponseData:(id)a0;

@end
