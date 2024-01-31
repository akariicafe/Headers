@class NSString;

@interface SSMLParseError : NSObject

@property (retain, nonatomic) NSString *error;
@property (retain, nonatomic) NSString *hint;
@property (retain, nonatomic) NSString *location;

+ (id)errorWith:(id)a0 hint:(id)a1 errorLocation:(id)a2;

- (void).cxx_destruct;

@end
