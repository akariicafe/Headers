@class HDHealthServiceCharacteristic;

@interface _HDHealthServiceWriteOperation : NSObject {
    BOOL _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    id /* block */ _completion;
}

- (void).cxx_destruct;

@end
