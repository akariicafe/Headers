@class NSString, NSError;

@interface IKOnReadyStateChangeMessage : NSObject

@property (readonly, nonatomic) unsigned int readyState;
@property (readonly, nonatomic) unsigned int statusCode;
@property (copy, nonatomic) NSString *statusText;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithReadyState:(unsigned int)a0 statusCode:(unsigned int)a1 statusText:(id)a2 error:(id)a3;

@end
