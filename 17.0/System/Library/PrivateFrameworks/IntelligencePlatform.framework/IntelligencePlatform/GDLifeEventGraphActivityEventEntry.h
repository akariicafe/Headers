@class GDGraphActivityEventEntityIdentifier, NSDate;

@interface GDLifeEventGraphActivityEventEntry : NSObject

@property (readonly, copy, nonatomic) GDGraphActivityEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)initWithEntityIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
