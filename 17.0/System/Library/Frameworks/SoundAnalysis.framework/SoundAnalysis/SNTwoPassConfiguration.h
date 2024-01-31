@protocol SNRequest;

@interface SNTwoPassConfiguration : NSObject {
    id<SNRequest> _firstPassRequest;
    id<SNRequest> _secondPassRequest;
    double _historicalDataAmount;
}

- (void).cxx_destruct;

@end
