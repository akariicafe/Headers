@class NSMutableArray;

@interface TIContinuousPath : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) NSMutableArray *samples;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJsonDictionary:(id)a0;
- (id)initWithTimeStamp:(double)a0;
- (id)toJsonDictionary;

@end
