@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer> {
    long long _descriptorIndex;
}

@property (nonatomic) BOOL shouldConsumeEvents;
@property (readonly, nonatomic) NSArray *descriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recognizerForEventDescriptor:(id)a0;
+ (id)recognizerForEventDescriptors:(id)a0;

- (void).cxx_destruct;
- (long long)processEvent:(struct __IOHIDEvent { } *)a0 shouldConsume:(BOOL *)a1;

@end
