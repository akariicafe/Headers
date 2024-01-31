@class NSString;

@interface CLSSignalNode : NSObject

@property (readonly) unsigned long long identifier;
@property (readonly) NSString *name;
@property (readonly) double operatingPoint;
@property (readonly) double highPrecisionOperatingPoint;
@property (readonly) double highRecallOperatingPoint;

- (void).cxx_destruct;
- (BOOL)passesHighPrecisionWithSignal:(id)a0;
- (BOOL)passesHighRecallWithSignal:(id)a0;
- (BOOL)passesWithConfidence:(double)a0;
- (BOOL)passesHighRecallWithConfidence:(double)a0;
- (BOOL)failsHighPrecisionWithConfidence:(double)a0;
- (BOOL)failsHighPrecisionWithSignal:(id)a0;
- (BOOL)failsHighRecallWithConfidence:(double)a0;
- (BOOL)failsHighRecallWithSignal:(id)a0;
- (BOOL)failsWithConfidence:(double)a0;
- (BOOL)failsWithSignal:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 name:(id)a1 operatingPoint:(double)a2 highPrecisionOperatingPoint:(double)a3 highRecallOperatingPoint:(double)a4;
- (BOOL)passesHighPrecisionWithConfidence:(double)a0;
- (BOOL)passesWithSignal:(id)a0;
- (id)signalInfoWithIsHierarchical:(BOOL)a0;

@end
