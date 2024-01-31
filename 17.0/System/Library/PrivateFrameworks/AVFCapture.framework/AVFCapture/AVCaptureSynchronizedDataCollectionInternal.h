@class NSArray;

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {
    id *dataOutputs;
    id *synchronizedData;
    char count;
    char maxCount;
    unsigned long long changeSeed;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } creationTime;
    NSArray *possibleDataOutputs;
}

@end
