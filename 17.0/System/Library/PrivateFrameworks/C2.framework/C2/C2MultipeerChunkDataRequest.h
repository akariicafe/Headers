@class NSUUID;

@interface C2MultipeerChunkDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestUUID;
@property (nonatomic) BOOL chunkDataRequested;
@property (copy, nonatomic) id /* block */ chunkDataCallback;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
