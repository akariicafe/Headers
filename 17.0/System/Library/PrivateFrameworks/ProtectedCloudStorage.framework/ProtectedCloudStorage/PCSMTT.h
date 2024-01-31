@class NSUUID, NSMutableArray, NSDate;

@interface PCSMTT : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *startTime;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (readonly) NSUUID *UUID;
@property (readonly) double time;
@property BOOL returnedExistingIdentity;

- (id)init;
- (void)start;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (void)stop;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)completePoint:(id)a0;
- (id)initWithMTT:(id)a0;
- (void)measure:(id)a0 block:(id /* block */)a1;
- (void)measure:(id)a0 success:(BOOL)a1 time:(double)a2;
- (id)measurePoint:(id)a0;

@end
