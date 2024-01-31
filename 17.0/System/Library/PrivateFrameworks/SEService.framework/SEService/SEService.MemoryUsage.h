@class NSString, _TtC9SEService11MemoryUsage;

@interface SEService.MemoryUsage : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) _TtC9SEService11MemoryUsage *empty;
@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ pHeap;
@property (nonatomic) void /* unknown type, empty encoding */ cor;
@property (nonatomic) void /* unknown type, empty encoding */ cod;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPHeap:(long long)a0 cor:(long long)a1 cod:(long long)a2;

@end
