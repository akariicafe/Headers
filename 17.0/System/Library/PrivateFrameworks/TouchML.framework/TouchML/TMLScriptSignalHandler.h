@class NSString, TMLContext;

@interface TMLScriptSignalHandler : NSObject <TMLSignalHandler> {
    TMLContext *_context;
    id _target;
    NSString *_functionName;
    unsigned long long _returnType;
    int _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attach;
- (void)detach;
- (void).cxx_destruct;
- (id)callWithArguments:(id)a0;
- (id)initWithFunctionName:(id)a0 returnType:(unsigned long long)a1 target:(id)a2 context:(id)a3;

@end
