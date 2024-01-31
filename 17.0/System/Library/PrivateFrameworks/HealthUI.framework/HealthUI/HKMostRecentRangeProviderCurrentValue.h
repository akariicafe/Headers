@class NSString, HKQuantity, NSDate;

@interface HKMostRecentRangeProviderCurrentValue : NSObject <HKDataProviderValue> {
    HKQuantity *_minimumValue;
    HKQuantity *_maximumValue;
    BOOL _isSingleValue;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
