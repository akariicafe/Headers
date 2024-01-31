@class NSMutableArray;

@interface SAUUIDToSymbolicate : NSObject {
    int _livePid;
    NSMutableArray *_binaries;
    unsigned long long _dataGatheringOptions;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
