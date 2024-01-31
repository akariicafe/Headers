@class NSString, NSNumber, NSDate;

@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue> {
    NSNumber *_average;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
