@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
