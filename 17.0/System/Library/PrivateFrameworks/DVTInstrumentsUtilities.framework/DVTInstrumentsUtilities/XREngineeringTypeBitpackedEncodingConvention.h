@class NSArray, NSMutableArray;

@interface XREngineeringTypeBitpackedEncodingConvention : XREngineeringTypeEncodingConvention {
    NSMutableArray *_entries;
}

@property (readonly, nonatomic) NSArray *entries;

- (id)init;
- (void)addEntry:(id)a0;
- (void).cxx_destruct;

@end
