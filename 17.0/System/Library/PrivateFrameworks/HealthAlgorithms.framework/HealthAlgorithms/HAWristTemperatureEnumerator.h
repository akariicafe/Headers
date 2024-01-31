@class NSData, NSDate;

@interface HAWristTemperatureEnumerator : NSEnumerator

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (nonatomic) unsigned long long enumerationIndex;
@property (readonly, nonatomic) unsigned long long numWristTemperatures;

- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;
- (id)convertPackedTemperatureSubsample;
- (id)initWithData:(id)a0 withSessionStartDate:(id)a1 numWristTemperatures:(unsigned long long)a2;

@end
