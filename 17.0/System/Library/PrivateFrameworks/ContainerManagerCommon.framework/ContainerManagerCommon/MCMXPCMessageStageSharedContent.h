@class NSString;

@interface MCMXPCMessageStageSharedContent : MCMXPCMessageWithIdentifierBase <MCMParametersStageSharedContent>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) NSString *destinationRelativePath;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;
- (unsigned int)disposition;

@end
