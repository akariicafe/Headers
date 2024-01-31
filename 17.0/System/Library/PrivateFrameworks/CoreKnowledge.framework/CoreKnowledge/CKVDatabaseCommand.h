@class NSString, NSArray;

@interface CKVDatabaseCommand : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *parameters;

- (id)init;
- (unsigned long long)hash;
- (BOOL)updateCommandString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToCommand:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)updateParameters:(id)a0;
- (void)replaceParameters:(id)a0;
- (id)initWithCommandString:(id)a0 parameters:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
