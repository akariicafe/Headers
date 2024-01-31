@class NSString;

@interface BMSQLColumn : NSObject

@property (readonly, copy, nonatomic) id /* block */ extractBlock;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) BOOL requestOnly;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 extractBlock:(id /* block */)a3;

@end
