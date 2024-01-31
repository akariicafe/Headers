@class NSData, NSString;

@interface TCNamedData : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *name;

+ (id)namedDataWithData:(id)a0 named:(id)a1;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 named:(id)a1;

@end
