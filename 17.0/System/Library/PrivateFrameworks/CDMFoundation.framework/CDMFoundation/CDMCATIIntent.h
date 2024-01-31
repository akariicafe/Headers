@class NSString;

@interface CDMCATIIntent : NSObject

@property (retain) NSString *guid;
@property (retain) NSString *intentName;
@property (retain) NSString *ensemble;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 intentName:(id)a1 ensemble:(id)a2;

@end
