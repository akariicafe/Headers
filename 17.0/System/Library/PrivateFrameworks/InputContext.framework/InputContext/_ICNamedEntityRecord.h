@class NSString;

@interface _ICNamedEntityRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long data;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL passesFilters;

- (id)initWithName:(id)a0 data:(unsigned long long)a1;
- (id)initWithName:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 timestamp:(double)a1 passesFilters:(BOOL)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
