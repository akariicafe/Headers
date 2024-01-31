@class NSSet, NSDate;

@interface PPSourceStats : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) long long minRefCount;
@property (readonly, nonatomic) long long maxRefCount;
@property (readonly, nonatomic) double avgRefCount;
@property (readonly, nonatomic) double medianRefCount;
@property (readonly, nonatomic) NSDate *earliestDate;
@property (readonly, nonatomic) NSDate *latestDate;
@property (readonly, nonatomic) long long uniqueBundleIdCount;
@property (readonly, nonatomic) long long uniqueDocIdCount;
@property (readonly, nonatomic) unsigned long long recordCount;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithMinRefCount:(long long)a0 maxRefCount:(long long)a1 avgRefCount:(double)a2 medianRefCount:(double)a3 earliestDate:(id)a4 latestDate:(id)a5 uniqueBundleIdCount:(long long)a6 uniqueDocIdCount:(long long)a7 recordCount:(unsigned long long)a8;
- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)toDictionary;

@end
