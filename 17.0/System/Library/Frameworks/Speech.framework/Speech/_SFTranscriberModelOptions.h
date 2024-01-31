@class NSURL, NSString, NSArray;

@interface _SFTranscriberModelOptions : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSURL *supplementalModelURL;
@property (readonly, nonatomic) BOOL farField;
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL;
@property (readonly, copy, nonatomic) NSString *taskForMemoryLock;
@property (readonly, copy, nonatomic) NSArray *speechProfileURLs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 speechProfileURLs:(id)a3 taskForMemoryLock:(id)a4;
- (id)initWithSupplementalModelURL:(id)a0 farField:(BOOL)a1 modelOverrideURL:(id)a2 taskForMemoryLock:(id)a3;

@end
