@class NSString, NSArray;

@interface SiriCoreSQLiteColumnDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSArray *constraints;

+ (id)integerPrimaryKeyColumnWithName:(id)a0;
+ (id)uniqueTextColumnWithName:(id)a0;

- (id)initWithName:(id)a0 type:(id)a1 constraints:(id)a2;
- (id)initWithName:(id)a0 type:(id)a1 constraintsProvider:(id /* block */)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
