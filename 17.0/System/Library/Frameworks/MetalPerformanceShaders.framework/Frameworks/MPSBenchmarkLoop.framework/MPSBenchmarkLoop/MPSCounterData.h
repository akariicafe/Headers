@class NSData;

@interface MPSCounterData : NSObject

@property (readonly, retain, nonatomic) NSData *rawData;
@property (readonly, nonatomic) unsigned long long numberOfSamples;

- (void)dealloc;
- (id)initWithData:(id)a0 numberOfSamples:(unsigned long long)a1;

@end
