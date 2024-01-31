@class NSString;

@interface APDatabaseColumn : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) id value;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 forColumnType:(long long)a1 withValue:(id)a2;

@end
