@class NSDate;

@interface GDGeoHashVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long geoHash;
@property (readonly, nonatomic) BOOL isEnter;
@property (readonly, nonatomic) long long level;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDate:(id)a0 geoHash:(unsigned long long)a1 isEnter:(BOOL)a2 level:(long long)a3;

@end
