@class NSString, NSNumber;

@interface EDAMTimeZoneSpec : FATObject

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *rawUTCOffsetMillis;
@property (retain, nonatomic) NSNumber *dstSavingsAdjustmentMillis;
@property (retain, nonatomic) NSNumber *nextEnterDaylightSavings;
@property (retain, nonatomic) NSNumber *nextLeaveDaylightSavings;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
