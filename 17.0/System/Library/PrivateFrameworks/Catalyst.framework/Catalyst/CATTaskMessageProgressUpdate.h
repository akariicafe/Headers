@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage

@property (copy, nonatomic) CATTaskProgress *progress;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTaskUUID:(id)a0 progress:(id)a1;
- (id)initWithCoder:(id)a0;

@end
