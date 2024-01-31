@class NSString, NSError;

@interface VSJSAppScriptEvaluatorResult : NSObject

@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL loaded;
@property (retain, nonatomic) NSError *loadError;

- (void).cxx_destruct;

@end
