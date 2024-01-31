@class BWStillImageSettings, NSMutableDictionary;

@interface BWStillImageProcessingPlan : NSObject {
    BWStillImageSettings *_settings;
    NSMutableDictionary *_inputsByBufferTypeByPortTypeBySequenceNumber;
}

- (void)dealloc;
- (id)description;
- (id)initWithSettings:(id)a0;
- (void)addInput:(id)a0 sequenceNumber:(unsigned int)a1 portType:(id)a2 bufferType:(unsigned long long)a3;
- (void)addInput:(id)a0 sequenceNumber:(unsigned int)a1 portType:(id)a2 bufferTypes:(id)a3;
- (id)lastAddedInputForSequenceNumber:(unsigned int)a0 portType:(id)a1 bufferType:(unsigned long long)a2;

@end
