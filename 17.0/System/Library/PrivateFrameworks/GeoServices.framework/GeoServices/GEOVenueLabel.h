@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) NSString *detail;

- (id)init;
- (id)initWithLabel:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 shortName:(id)a1 detail:(id)a2;

@end
