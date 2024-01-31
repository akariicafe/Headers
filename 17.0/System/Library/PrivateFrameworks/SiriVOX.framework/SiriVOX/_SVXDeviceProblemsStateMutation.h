@class NSString, SVXDeviceProblemsState;

@interface _SVXDeviceProblemsStateMutation : NSObject <SVXDeviceProblemsStateMutating> {
    SVXDeviceProblemsState *_baseModel;
    BOOL _isFixingProblems;
    unsigned long long _problems;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsFixingProblems : 1; unsigned char hasProblems : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)generate;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setIsFixingProblems:(BOOL)a0;
- (void)setProblems:(unsigned long long)a0;

@end
