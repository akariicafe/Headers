@class NSArray;

@interface GTReplayShaderDebugVertex : GTReplayShaderDebugRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *vertexIDs;
@property (nonatomic) unsigned int instanceID;
@property (nonatomic) unsigned int amplificationID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
