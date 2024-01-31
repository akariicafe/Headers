@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding>

@property (retain, nonatomic) id source;
@property (retain, nonatomic) id destination;
@property (copy, nonatomic) NSString *label;

- (void)encodeWithCoder:(id)a0;
- (void)connect;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)connectForSimulator;

@end
