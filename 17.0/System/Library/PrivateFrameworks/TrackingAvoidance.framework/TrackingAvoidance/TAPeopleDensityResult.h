@class NSString, NSDictionary, NSDateInterval, NSDate;

@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long peopleDensityState;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy, nonatomic) NSDateInterval *observationInterval;
@property (readonly, copy, nonatomic) NSDictionary *additionalInfo;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(long long)a0 confidence:(double)a1 observationInterval:(id)a2 additionalInfo:(id)a3 date:(id)a4;

@end
