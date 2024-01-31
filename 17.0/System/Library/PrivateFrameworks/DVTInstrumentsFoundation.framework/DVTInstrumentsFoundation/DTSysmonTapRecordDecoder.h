@class NSArray;

@interface DTSysmonTapRecordDecoder : NSObject {
    unsigned long long _mostRecentEpoch;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
}

- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsFromSample:(id)a0 block:(id /* block */)a1;

@end
