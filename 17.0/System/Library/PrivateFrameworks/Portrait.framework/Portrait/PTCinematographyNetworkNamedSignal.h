@interface PTCinematographyNetworkNamedSignal : PTCinematographyNetworkSignal

@property (readonly) BOOL flatten;

- (id)_flattenArray:(id)a0;
- (void)_flattenArray:(id)a0 toMutableArray:(id)a1;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;

@end
