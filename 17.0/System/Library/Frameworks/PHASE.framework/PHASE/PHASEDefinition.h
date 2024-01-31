@class NSString;

@interface PHASEDefinition : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uid;

+ (id)new;

- (id)init;
- (id)initInternal;
- (id)uid;
- (void)setUid:(id)a0;
- (void).cxx_destruct;

@end
