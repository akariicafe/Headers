@class NSString;

@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol> {
    unsigned long long integerValue;
    NSString *stringValue;
}

@property (readonly) NSString *fieldName;
@property (weak) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
